#include <gfx/nxfont.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CTextMan::s_plat_alloc_text_pool( void )
{
	for( int i = 0; i < vMAX_TEXT_INSTANCES; ++i )
	{
		/* FIXME
	   	CXboxText *p_text		= new CXboxText;
		p_text->mp_next			= sp_dynamic_text_list;
		sp_dynamic_text_list	= p_text;
		*/
	}
}

} // Namespace Nx  			
