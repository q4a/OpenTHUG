/*****************************************************************************
**																			**
**			              Neversoft Entertainment			                **
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:																**
**																			**
**	Module:						 		 									**
**																			**
**	File name:		gfx/win32/p_nx.cpp										**
**																			**
**	Created:		01/16/2002	-	dc										**
**																			**
**	Description:	Xbox platform specific interface to the engine			**
**					This is Xbox SPECIFIC!!!!!! If there is anything in		**
**					here that is not Xbox specific, then it needs to be		**
**					in nx.cpp												**
**																			**
*****************************************************************************/


/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

#include <gfx/nx.h>

/*****************************************************************************
**								DBG Information								**
*****************************************************************************/

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


/*****************************************************************************
**								 Public Data								**
*****************************************************************************/

/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/


/*****************************************************************************
**							   Private Functions							**
*****************************************************************************/


/*****************************************************************************
**							   Public Functions								**
*****************************************************************************/


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/


namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_start_engine( void )
{
	printf("FIXME Nx::CEngine::s_plat_start_engine\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_pre_render( void )
{
	printf("FIXME Nx::CEngine::s_plat_pre_render\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_post_render( void )
{
	printf("FIXME Nx::CEngine::s_plat_post_render\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_render_world( void )
{
	printf("FIXME Nx::CEngine::s_plat_render_world\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CScene	*CEngine::s_plat_create_scene( const char *p_name, CTexDict *p_tex_dict, bool add_super_sectors )
{
	printf("FIXME Nx::CEngine::s_plat_create_scene\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CScene *CEngine::s_plat_load_scene( const char *p_name, CTexDict *p_tex_dict, bool add_super_sectors, bool is_sky, bool is_dictionary )
{
	printf("FIXME Nx::CEngine::s_plat_load_scene\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_unload_scene( CScene *p_scene )
{
	printf("FIXME Nx::CEngine::s_plat_unload_scene\n");
	Dbg_MsgAssert( p_scene,( "Trying to delete a NULL scene" ));
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_add_scene( CScene *p_scene, const char *p_filename )
{
	printf("FIXME Nx::CEngine::s_plat_add_scene\n");
	// Function to incrementally add geometry to a scene - should NOT be getting called on Xbox.
	Dbg_Assert( 0 );
	return false;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
//CTexDict* CEngine::s_plat_load_textures( const char* p_name )
//{
//	NxXbox::LoadTextureFile( p_name );
//	return NULL;
//}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CModel* CEngine::s_plat_init_model( void )
{
	printf("FIXME Nx::CEngine::s_plat_init_model\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_uninit_model( CModel* pModel )
{
	delete pModel;

	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CGeom* CEngine::s_plat_init_geom( void )
{
	printf("FIXME Nx::CEngine::s_plat_init_geom\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_uninit_geom( CGeom *p_geom )
{
	delete p_geom;
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CQuickAnim* CEngine::s_plat_init_quick_anim()
{
	printf("FIXME Nx::CEngine::s_plat_init_quick_anim\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_uninit_quick_anim(CQuickAnim* pQuickAnim)
{
	delete pQuickAnim;
	return;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CMesh* CEngine::s_plat_load_mesh( const char* pMeshFileName, Nx::CTexDict* pTexDict, uint32 texDictOffset, bool isSkin, bool doShadowVolume )
{
	printf("FIXME Nx::CEngine::s_plat_load_mesh\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CMesh* CEngine::s_plat_load_mesh( uint32 id, uint32 *p_model_data, int model_data_size, uint8 *p_cas_data, Nx::CTexDict* pTexDict, uint32 texDictOffset, bool isSkin, bool doShadowVolume )
{
	printf("FIXME Nx::CEngine::s_plat_load_mesh\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_unload_mesh( CMesh *pMesh )
{
	delete pMesh;
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_set_mesh_scaling_parameters( SMeshScalingParameters* pParams )
{
	printf("FIXME Nx::CEngine::s_plat_set_mesh_scaling_parameters\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CSprite *CEngine::s_plat_create_sprite( CWindow2D *p_window )
{
	printf("FIXME Nx::CEngine::s_plat_create_sprite\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CEngine::s_plat_destroy_sprite( CSprite *p_sprite )
{
	delete p_sprite;
	return true;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

CTextured3dPoly *	CEngine::s_plat_create_textured_3d_poly()
{
	printf("FIXME Nx::CEngine::s_plat_create_textured_3d_poly\n");
	return NULL;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

bool		CEngine::s_plat_destroy_textured_3d_poly(CTextured3dPoly *p_poly)
{
	delete p_poly;
	return true;
}


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
Nx::CTexture *CEngine::s_plat_create_render_target_texture( int width, int height, int depth, int z_depth )
{
	printf("FIXME Nx::CEngine::s_plat_create_render_target_texture\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_project_texture_into_scene( Nx::CTexture *p_texture, Nx::CModel *p_model, Nx::CScene *p_scene )
{
	printf("FIXME Nx::CEngine::s_plat_project_texture_into_scene\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_set_projection_texture_camera( Nx::CTexture *p_texture, Gfx::Camera *p_camera )
{
	printf("FIXME Nx::CEngine::s_plat_set_projection_texture_camera\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_stop_projection_texture( Nx::CTexture *p_texture )
{
	printf("FIXME Nx::CEngine::s_plat_stop_projection_texture\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_add_occlusion_poly( uint32 num_verts, Mth::Vector *p_vert_array, uint32 checksum )
{
	printf("FIXME Nx::CEngine::s_plat_add_occlusion_poly\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_enable_occlusion_poly( uint32 checksum, bool enable )
{
	printf("FIXME Nx::CEngine::s_plat_enable_occlusion_poly\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_remove_all_occlusion_polys( void )
{
	printf("FIXME Nx::CEngine::s_plat_remove_all_occlusion_polys\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
// returns true if the sphere at "center", with the "radius"
// is visible to the current camera
// (note, currently this is the last frame's camera on PS2)
bool CEngine::s_plat_is_visible( Mth::Vector& center, float radius )
{
	printf("FIXME Nx::CEngine::s_plat_is_visible\n");
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_set_max_multipass_distance( float dist )
{
	printf("FIXME Nx::CEngine::s_plat_set_max_multipass_distance\n");
	// Has no meaning for Xbox.
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
const char* CEngine::s_plat_get_platform_extension( void )
{
	printf("FIXME? Nx::CEngine::s_plat_get_platform_extension\n");
	// String literals are statically allocated so can be returned safely, (Bjarne, p90)
	return "PC";
}


/******************************************************************/
// Wait for any pending asyncronous rendering to finish, so rendering
// data can be unloaded
/******************************************************************/
void CEngine::s_plat_finish_rendering()
{
	printf("FIXME Nx::CEngine::s_plat_finish_rendering\n");
}

/******************************************************************/
// Set the amount that the previous frame is blended with this frame
// 0 = none	  	(just see current frame) 	
// 128 = 50/50
// 255 = 100% 	(so you only see the previous frame)												  
/******************************************************************/
void CEngine::s_plat_set_screen_blur( uint32 amount )
{
	printf("FIXME Nx::CEngine::s_plat_set_screen_blur\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
int	CEngine::s_plat_get_num_soundtracks( void )
{
	printf("FIXME Nx::CEngine::s_plat_get_num_soundtracks\n");
	return 0;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
const char* CEngine::s_plat_get_soundtrack_name( int soundtrack_number )
{
	printf("FIXME Nx::CEngine::s_plat_get_soundtrack_name\n");
	static char buf[128];

	return buf;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_set_letterbox( bool letterbox )
{
	printf("FIXME Nx::CEngine::s_plat_set_letterbox\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CEngine::s_plat_set_color_buffer_clear( bool clear )
{
	printf("FIXME Nx::CEngine::s_plat_set_color_buffer_clear\n");
//	NxXbox::EngineGlobals.clear_color_buffer = clear;
}

} // namespace Nx
