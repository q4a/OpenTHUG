/*****************************************************************************
**																			**
**			              			q4a						                **
**																		   	**
**				   Copyright (C) 2020 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		GFX (Graphics Library)									**
**																			**
**	Module:			Game Engine (GEL)	 									**
**																			**
**	File name:		p_music.cpp												**
**																			**
**	Created:		05/10/20	-	q4a										**
**																			**
**	Description:	PC specific .wma streaming code							**
**																			**
*****************************************************************************/


/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

#include <core/defines.h>

#include <gel/soundfx/soundfx.h>

#include "p_music.h"

/*****************************************************************************
**								DBG Information								**
*****************************************************************************/

/*****************************************************************************
**								  Externals									**
*****************************************************************************/

namespace Pcm
{

/*****************************************************************************
**								   Defines									**
*****************************************************************************/

#define STREAMS_ARE_PCM

/*****************************************************************************
**								Private Types								**
*****************************************************************************/


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void PCMAudio_Init(void)
{
}



int PCMAudio_Update(void)
{
	return 0;
}



bool PCMAudio_PlayMusicTrack(const char* filename)
{
	return false;
}

bool PCMAudio_PlayMusicTrack(uint32 checksum)
{
	return false;
}

bool PCMAudio_PlayStream(uint32 checksum, int whichStream, Sfx::sVolume* p_volume, float fPitch, bool preload)
{
	return false;
}



void PCMAudio_Pause(bool pause, int ch)
{
}



void PCMAudio_StopMusic(bool waitPlease)
{
}

void PCMAudio_StopStream(int whichStream, bool waitPlease)
{
}

void PCMAudio_StopStreams(void)
{
}



bool PCMAudio_PreLoadStream(uint32 checksum, int whichStream)
{
	return false;
}

bool PCMAudio_PreLoadStreamDone(int whichStream)
{
	return true;
}

bool PCMAudio_StartPreLoadedStream(int whichStream, Sfx::sVolume* p_volume, float pitch)
{
	return false;
}



bool PCMAudio_PreLoadMusicStream(uint32 checksum)
{
	return false;
}

bool PCMAudio_PreLoadMusicStreamDone(void)
{
	return true;
}

bool PCMAudio_StartPreLoadedMusicStream(void)
{
	return false;
}



int PCMAudio_SetMusicVolume(float volume)
{
	return true;
}

bool PCMAudio_SetStreamPitch(float fPitch, int whichStream)
{
	return true;
}



bool PCMAudio_SetStreamVolume(Sfx::sVolume* p_volume, int whichStream)
{
	return true;
}



int PCMAudio_GetMusicStatus(void)
{
	return PCM_STATUS_FREE;
}

int PCMAudio_GetStreamStatus(int whichStream)
{
	return PCM_STATUS_FREE;
}



bool PCMAudio_TrackExists(const char* pTrackName, int ch)
{
	return true;
}

bool PCMAudio_LoadMusicHeader(const char* nameOfFile)
{
	return true;
}

bool PCMAudio_LoadStreamHeader(const char* nameOfFile)
{
	return true;
}



uint32 PCMAudio_FindNameFromChecksum(uint32 checksum, int ch)
{
	return 0;
}

} // namespace PCM
