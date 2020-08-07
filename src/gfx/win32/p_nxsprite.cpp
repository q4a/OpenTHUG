#include <gfx/nxsprite.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void CSprite::plat_enable_constant_z_value(bool enable)
{
	printf("FIXME CSprite::plat_enable_constant_z_value\n");
	//NxPs2::SSprite::EnableConstantZValue(enable);
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void CSprite::plat_set_constant_z_value(Nx::ZBufferValue z)
{
	printf("FIXME CSprite::plat_set_constant_z_value\n");
	//NxPs2::SSprite::SetConstantZValue(z);
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

Nx::ZBufferValue CSprite::plat_get_constant_z_value()
{
	printf("FIXME CSprite::plat_get_constant_z_value\n");
	//return NxPs2::SSprite::GetConstantZValue();
	return 0;
}

} // Namespace Nx  			
