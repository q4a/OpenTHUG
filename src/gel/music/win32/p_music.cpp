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
	printf("FIXME Pcm::PCMAudio_Init\n");
}



int PCMAudio_Update(void)
{
	printf("FIXME Pcm::PCMAudio_Init\n");
	return 0;
}



bool PCMAudio_PlayMusicTrack(const char* filename)
{
	printf("FIXME Pcm::PCMAudio_PlayMusicTrack - filename\n");
	return false;
}

bool PCMAudio_PlayMusicTrack(uint32 checksum)
{
	printf("FIXME Pcm::PCMAudio_PlayMusicTrack - checksum\n");
	return false;
}

bool PCMAudio_PlayStream(uint32 checksum, int whichStream, Sfx::sVolume* p_volume, float fPitch, bool preload)
{
	printf("FIXME Pcm::PCMAudio_PlayStream\n");
	return false;
}



void PCMAudio_Pause(bool pause, int ch)
{
	printf("FIXME Pcm::PCMAudio_Pause\n");
}



void PCMAudio_StopMusic(bool waitPlease)
{
	printf("FIXME Pcm::PCMAudio_StopMusic\n");
}

void PCMAudio_StopStream(int whichStream, bool waitPlease)
{
	printf("FIXME Pcm::PCMAudio_StopStream\n");
}

void PCMAudio_StopStreams(void)
{
	printf("FIXME Pcm::PCMAudio_StopStreams\n");
}



bool PCMAudio_PreLoadStream(uint32 checksum, int whichStream)
{
	printf("FIXME Pcm::PCMAudio_PreLoadStream\n");
	return false;
}

bool PCMAudio_PreLoadStreamDone(int whichStream)
{
	printf("FIXME Pcm::PCMAudio_PreLoadStreamDone\n");
	return true;
}

bool PCMAudio_StartPreLoadedStream(int whichStream, Sfx::sVolume* p_volume, float pitch)
{
	printf("FIXME Pcm::PCMAudio_StartPreLoadedStream\n");
	return false;
}



bool PCMAudio_PreLoadMusicStream(uint32 checksum)
{
	printf("FIXME Pcm::PCMAudio_PreLoadMusicStream\n");
	return false;
}

bool PCMAudio_PreLoadMusicStreamDone(void)
{
	printf("FIXME Pcm::PCMAudio_PreLoadMusicStreamDone\n");
	return true;
}

bool PCMAudio_StartPreLoadedMusicStream(void)
{
	printf("FIXME Pcm::PCMAudio_StartPreLoadedMusicStream\n");
	return false;
}



int PCMAudio_SetMusicVolume(float volume)
{
	printf("FIXME Pcm::PCMAudio_SetMusicVolume\n");
	return true;
}

bool PCMAudio_SetStreamPitch(float fPitch, int whichStream)
{
	printf("FIXME Pcm::PCMAudio_SetStreamPitch\n");
	return true;
}



bool PCMAudio_SetStreamVolume(Sfx::sVolume* p_volume, int whichStream)
{
	printf("FIXME Pcm::PCMAudio_SetStreamVolume\n");
	return true;
}



int PCMAudio_GetMusicStatus(void)
{
	printf("FIXME Pcm::PCMAudio_GetMusicStatus\n");
	return PCM_STATUS_FREE;
}

int PCMAudio_GetStreamStatus(int whichStream)
{
	printf("FIXME Pcm::PCMAudio_GetStreamStatus\n");
	return PCM_STATUS_FREE;
}



bool PCMAudio_TrackExists(const char* pTrackName, int ch)
{
	printf("FIXME Pcm::PCMAudio_TrackExists\n");
	return true;
}

bool PCMAudio_LoadMusicHeader(const char* nameOfFile)
{
	printf("FIXME Pcm::PCMAudio_LoadMusicHeader\n");
	return true;
}

bool PCMAudio_LoadStreamHeader(const char* nameOfFile)
{
	printf("FIXME Pcm::PCMAudio_LoadStreamHeader\n");
	return true;
}



uint32 PCMAudio_FindNameFromChecksum(uint32 checksum, int ch)
{
	printf("FIXME Pcm::PCMAudio_FindNameFromChecksum\n");
	return 0;
}

} // namespace PCM
