///////////////////////////////////////////////////////////////////////////////////////
//
// p_AsyncFilesys.cpp		GRJ 11 Oct 2002
//
// Asynchronous file system
//
///////////////////////////////////////////////////////////////////////////////////////

#include <sys/file/asyncfilesys.h>

namespace File
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CAsyncFileLoader::s_plat_init( void )
{
	for( int i = 0; i < MAX_FILE_HANDLES; ++i )
	{
		if( s_file_handles[i] )
		{
			s_file_handles[i]->init();
		}
		else
		{
			// FIXME // s_file_handles[i] = new CXboxAsyncFileHandle;
		}
	}
	printf("FIXME File::CAsyncFileLoader::s_plat_init\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CAsyncFileLoader::s_plat_cleanup( void )
{
	for( int i = 0; i < MAX_FILE_HANDLES; ++i )
	{
		if( s_file_handles[i] )
		{
			delete s_file_handles[i];
			s_file_handles[i] = NULL;
		}
	}
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CAsyncFileLoader::s_plat_async_supported( void )
{
	printf("FIXME File::CAsyncFileLoader::s_plat_async_supported\n");
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CAsyncFileLoader::s_plat_exist( const char *filename )
{
	printf("FIXME File::CAsyncFileLoader::s_plat_exist\n");
	/* FIXME
	HANDLE h_file = CreateFile( filename,							// File name
					0,												// Access mode
					FILE_SHARE_READ,								// Share mode
					NULL,											// SD
					OPEN_EXISTING,									// How to create
					FILE_FLAG_OVERLAPPED | FILE_FLAG_NO_BUFFERING,	// File attributes
					NULL );											// Handle to template file

	if( h_file == INVALID_HANDLE_VALUE )
	{
        return false;
	}

	CloseHandle( h_file );
	*/
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CAsyncFileHandle *CAsyncFileLoader::s_plat_open( const char *filename, int priority )
{
	printf("FIXME File::CAsyncFileLoader::s_plat_open\n");
	/* FIXME
	CXboxAsyncFileHandle *p_handle = new CXboxAsyncFileHandle();
	p_handle->plat_init();

	bool opened = p_handle->plat_open( filename );
	if( !opened )
	{
		delete p_handle;
		return NULL;
	}

	return p_handle;
	*/return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CAsyncFileLoader::s_plat_swap_callback_list( void )
{
	s_cur_callback_list_index	= s_cur_callback_list_index ^ 1;	// Swap indices...
	s_new_io_completion			= false;							// ...and clear flag.
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CAsyncFileLoader::s_plat_update( void )
{
	for( int h = 0; h < MAX_FILE_HANDLES; ++h )
	{
		if( s_file_handles[h] )
		{
			if( s_file_handles[h]->IsBusy())
			{
				// FIXME // CXboxAsyncFileHandle*	p_xbox_handle = static_cast<CXboxAsyncFileHandle*>( s_file_handles[h] );
				// FIXME // p_xbox_handle->plat_is_done();
			}
		}
	}
	printf("FIXME File::CAsyncFileLoader::s_plat_update\n");
}


}



