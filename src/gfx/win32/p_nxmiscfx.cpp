#include <gfx/nxmiscfx.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_screen_flash_render( sScreenFlashDetails *p_details )
{
	printf("FIXME Nx::plat_screen_flash_render\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_texture_splat_initialize( void )
{
	printf("FIXME Nx::plat_texture_splat_initialize\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_texture_splat_cleanup( void )
{
	printf("FIXME Nx::plat_texture_splat_cleanup\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_texture_splat_reset_poly( sSplatInstanceDetails *p_details, int index )
{
	printf("FIXME Nx::plat_texture_splat_reset_poly\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
bool plat_texture_splat( Nx::CSector **pp_sectors, Nx::CCollStatic **pp_collision, Mth::Vector& start, Mth::Vector& end, float size, float lifetime, Nx::CTexture *p_texture, Nx::sSplatTrailInstanceDetails *p_trail_details )
{
	printf("FIXME Nx::plat_texture_splat\n");
	return false;
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_texture_splat_render( void )
{
	printf("FIXME Nx::plat_texture_splat_render\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_shatter_initialize( void )
{
	printf("FIXME Nx::plat_shatter_initialize\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_shatter_cleanup( void )
{
	printf("FIXME Nx::plat_shatter_cleanup\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void plat_shatter( CGeom *p_geom )
{
	printf("FIXME Nx::plat_shatter\n");
}



/******************************************************************************
 *
 * 
 *****************************************************************************/
void plat_shatter_update( sShatterInstanceDetails *p_details, float framelength )
{
	printf("FIXME Nx::plat_shatter_update\n");
}



/******************************************************************************
 *
 * 
 *****************************************************************************/
void plat_shatter_render( sShatterInstanceDetails *p_details )
{
	printf("FIXME Nx::plat_shatter_render\n");
}

	
///////////////////////////////////////////////////////////////////
//
// FOG
//
///////////////////////////////////////////////////////////////////

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_enable_fog( bool enable )
{
	printf("FIXME Nx::CFog::s_plat_enable_fog\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_set_fog_near_distance( float distance )
{
	printf("FIXME Nx::CFog::s_plat_set_fog_near_distance\n");
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_set_fog_exponent( float exponent )
{
	printf("FIXME Nx::CFog::s_plat_set_fog_exponent\n");
	// This is no longer a valid call.
//	if( exponent > 0.0f )
//	{
//		s_plat_enable_fog( true );
//
//		NxXbox::EngineGlobals.fog_start				= FEET_TO_INCHES( -20.0f );
//		NxXbox::EngineGlobals.fog_end				= FEET_TO_INCHES( -60.0f );
//		D3DDevice_SetRenderState( D3DRS_FOGSTART,	*((DWORD*)( &NxXbox::EngineGlobals.fog_start )));
//		D3DDevice_SetRenderState( D3DRS_FOGEND,		*((DWORD*)( &NxXbox::EngineGlobals.fog_end )));
//	}
//	else
//	{
//		s_plat_enable_fog( false );
//	}
}



/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_set_fog_color( void )
{
	printf("FIXME Nx::CFog::s_plat_set_fog_color\n");
}
	


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_fog_update( void )
{
	printf("FIXME Nx::CFog::s_plat_fog_update\n");
}
	


/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CFog::s_plat_set_fog_rgba( Image::RGBA rgba )
{
	printf("FIXME Nx::CFog::s_plat_set_fog_rgba\n");
}

} // Nx
