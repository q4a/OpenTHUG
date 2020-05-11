#include <gfx/nxsprite.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void CSprite::plat_enable_constant_z_value(bool enable)
{
	//NxPs2::SSprite::EnableConstantZValue(enable);
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

void CSprite::plat_set_constant_z_value(Nx::ZBufferValue z)
{
	//NxPs2::SSprite::SetConstantZValue(z);
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

Nx::ZBufferValue CSprite::plat_get_constant_z_value()
{
	//return NxPs2::SSprite::GetConstantZValue();
	return 0;
}

} // Namespace Nx  			
