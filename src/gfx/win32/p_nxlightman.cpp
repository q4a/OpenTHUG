#include <gfx/nxlightman.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CLightManager::s_plat_update_engine( void )
{
	printf("FIXME Nx::CLightManager::s_plat_update_engine\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CLightManager::s_plat_update_lights( void )
{
	printf("FIXME Nx::CLightManager::s_plat_update_lights\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CLightManager::s_plat_set_light_ambient_color( void )
{
	printf("FIXME Nx::CLightManager::s_plat_set_light_ambient_color\n");
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
Image::RGBA	CLightManager::s_plat_get_light_ambient_color()
{
	return s_world_lights.m_light_ambient_rgba;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CLightManager::s_plat_set_light_direction( int light_index )
{
	printf("FIXME Nx::CLightManager::s_plat_set_light_direction\n");
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
const Mth::Vector & CLightManager::s_plat_get_light_direction( int light_index )
{
	static Mth::Vector dir;
	dir.Set( s_world_lights.m_light_direction[light_index][X], s_world_lights.m_light_direction[light_index][Y], s_world_lights.m_light_direction[light_index][Z] );
	return dir;
}




/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CLightManager::s_plat_set_light_diffuse_color( int light_index )
{
	printf("FIXME Nx::CLightManager::s_plat_set_light_diffuse_color\n");
	return true;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
Image::RGBA	CLightManager::s_plat_get_light_diffuse_color( int light_index )
{
	return s_world_lights.m_light_diffuse_rgba[light_index];
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CLightManager::s_plat_update_colors( void )
{
	s_plat_set_light_ambient_color();
	for( int i = 0; i < MAX_LIGHTS; ++i )
	{
		s_plat_set_light_diffuse_color( i );
	}
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
CModelLights *CLightManager::s_plat_create_model_lights()
{
	printf("FIXME Nx::CLightManager::s_plat_create_model_lights\n");
	return NULL;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool CLightManager::s_plat_free_model_lights( CModelLights *p_model_lights )
{
	Dbg_Assert( p_model_lights );

	delete p_model_lights;

	return true;
}

} 
