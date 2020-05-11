// Audio streaming function prototypes:
// q4a may 2020

#ifndef __P_MUSIC_H__
#define __P_MUSIC_H__

#define NUM_STREAMS 3

namespace Pcm
{

enum {
	EXTRA_CHANNEL,
	MUSIC_CHANNEL,
};

void PCMAudio_Init(void);

int PCMAudio_Update(void);

bool PCMAudio_PlayMusicTrack(const char* filename);
bool PCMAudio_PlayMusicTrack(uint32 checksum);
bool PCMAudio_PlayStream(uint32 checksum, int whichStream, Sfx::sVolume* p_volume, float pitch, bool preload = false);

void PCMAudio_Pause(bool pause = true, int ch = MUSIC_CHANNEL);

void PCMAudio_StopMusic(bool waitPlease);
void PCMAudio_StopStream(int whichStream, bool waitPlease = true);
void PCMAudio_StopStreams(void);

bool PCMAudio_PreLoadStream(uint32 checksum, int whichStream);
bool PCMAudio_PreLoadStreamDone(int whichStream);
bool PCMAudio_StartPreLoadedStream(int whichStream, Sfx::sVolume* p_volume, float pitch);

bool PCMAudio_PreLoadMusicStream(uint32 checksum);
bool PCMAudio_PreLoadMusicStreamDone(void);
bool PCMAudio_StartPreLoadedMusicStream(void);

int PCMAudio_SetMusicVolume(float volume);
bool PCMAudio_SetStreamPitch(float pitch, int whichStream);

enum {
	PCM_STATUS_FREE = (1 << 0),
	PCM_STATUS_PLAYING = (1 << 1),
	PCM_STATUS_LOADING = (1 << 2),
};

bool PCMAudio_SetStreamVolume(Sfx::sVolume* p_volume, int whichStream);

int PCMAudio_GetMusicStatus();
int PCMAudio_GetStreamStatus(int whichStream);

bool PCMAudio_TrackExists(const char* pTrackName, int ch);
bool PCMAudio_LoadMusicHeader(const char* nameOfFile);
bool PCMAudio_LoadStreamHeader(const char* nameOfFile);

uint32 PCMAudio_FindNameFromChecksum(uint32 checksum, int ch);

} // namespace PCM

#endif // __P_MUSIC_H__
