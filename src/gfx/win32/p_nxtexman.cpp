#include "gfx/nxtexman.h"

#include "gfx/win32/p_nxtexture.h"

namespace	Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CTexDict* CTexDictManager::s_plat_load_texture_dictionary( const char *p_tex_dict_name, bool is_level_data, uint32 texDictOffset, bool is_skin, bool forceTexDictLookup )
{
	printf("FIXME CTexDictManager::s_plat_load_texture_dictionary\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CTexDict* CTexDictManager::s_plat_load_texture_dictionary( uint32 checksum, uint32 *p_data, int data_size, bool is_level_data, uint32 texDictOffset, bool is_skin, bool forceTexDictLookup )
{
	printf("FIXME CTexDictManager::s_plat_load_texture_dictionary\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CTexDict* CTexDictManager::s_plat_create_texture_dictionary( uint32 checksum )
{
	return new CXboxTexDict(checksum);
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CTexDictManager::s_plat_unload_texture_dictionary( CTexDict* p_tex_dict )
{
	delete p_tex_dict;
	return true;
}


} 
 
