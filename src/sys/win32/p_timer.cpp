/*****************************************************************************
**																			**
**			              Neversoft Entertainment							**
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		SYS Library												**
**																			**
**	Module:			Timer (TMR)			 									**
**																			**
**	File name:		ngps/p_timer.cpp										**
**																			**
**	Created by:		09/25/00	-	dc										**
**																			**
**	Description:	XBox System Timer										**
**																			**
*****************************************************************************/


/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

#include <windows.h>
#include <mmsystem.h>
#include <time.h>
#include <sys/timer.h>
#include <sys/config/config.h>

/*****************************************************************************
**							  DBG Information								**
*****************************************************************************/

namespace Tmr 
{

/*****************************************************************************
**								  Externals									**
*****************************************************************************/

/*****************************************************************************
**								   Defines									**
*****************************************************************************/

/*****************************************************************************
**								Private Types								**
*****************************************************************************/

/*****************************************************************************
**								 Private Data								**
*****************************************************************************/

//static clock_t			start_count;



static volatile uint64	s_count;

#define	vSMOOTH_N  4

static volatile uint64	s_vblank = 0;
static uint64			s_stored_vblank = 0;

static clock_t			high_count;
static clock_t			start_count;
static __int64			high_count_high_precision;
static __int64			start_count_high_precision;

struct STimerInfo
{
	float	render_length;
	double	uncapped_render_length;
	int		render_buffer[vSMOOTH_N];
	uint64	render_vblank;
	uint64	render_last_vblank;
	int		render_index;
};

static STimerInfo gTimerInfo;
static STimerInfo gStoredTimerInfo;
static float xrate = 60.0f;

static void InitTimerInfo( void )
{
	static bool xrate_set = false;

	if( !xrate_set )
	{
		xrate		= (float)Config::FPS();
		xrate_set	= true;
	}

	gTimerInfo.render_length			= 0.01666666f;		// defualt to 1/60th
	gTimerInfo.uncapped_render_length	= 0.01666666f;		// defualt to 1/60th
	for( int i = 0; i < vSMOOTH_N; i++ )
	{
		gTimerInfo.render_buffer[ i ] = 1;
	}
	gTimerInfo.render_vblank			= 0;
	gTimerInfo.render_last_vblank		= 0;
	gTimerInfo.render_index				= 0;

	gStoredTimerInfo					= gTimerInfo;

	s_stored_vblank						= 0;
	s_vblank							= 0;
}


/*****************************************************************************
**								 Public Data								**
*****************************************************************************/

/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/

/*****************************************************************************
**							   Private Functions							**
*****************************************************************************/

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************

Manager::Manager ( void )
{
	Dbg_MemberFunction;
	
	// Set the start count.
	start_count = timeGetTime();	
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************

Manager::~Manager ( void )
{
	Dbg_MemberFunction;    
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
__int64 __declspec(naked) __stdcall getCycles(void)
{
	_asm
	{
		rdtsc
		ret
	}
}

/*****************************************************************************
**							   Public Functions								**
*****************************************************************************/
 
Time GetTime ( void )
{
	return timeGetTime();
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
 
MicroSeconds GetTimeInUSeconds( void )
{
	return timeGetTime() * 1000;
}

float FrameLength()
{
	return 16;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void Init(void)
{
	InitTimerInfo();

	s_count = 0;
	start_count = clock();
	high_count = (clock_t)0;
	start_count_high_precision = getCycles();
	high_count_high_precision = (__int64)0;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void DeInit(void)
{
}

} // namespace Tmr
