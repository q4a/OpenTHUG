#include <gfx/nxwin2d.h>

namespace Nx
{

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/
void CWindow2DManager::s_plat_alloc_window2d_pool()
{
	for( int i = 0; i < vMAX_WINDOW_INSTANCES; i++ )
	{
	   	/* FIXME
		CXboxWindow2D *p_window = new CXboxWindow2D;
		p_window->mp_next	= sp_window_list;
		sp_window_list		= p_window;
		*/
	}
	printf("FIXME CWindow2DManager::s_plat_alloc_window2d_pool\n");
}

} // Namespace Nx  			
				
				
