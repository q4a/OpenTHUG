/*****************************************************************************
**																			**
**			              Neversoft Entertainment			                **
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		SYS Library												**
**																			**
**	Module:			SYS (SYS_) 												**
**																			**
**	File name:		keyboard.h												**
**																			**
**	Created:		03/08/2001	-	gj										**
**																			**
**	Description:	USB Keyboard interface									**
**																			**
*****************************************************************************/


#ifndef __SYS_KEYBOARD_H
#define __SYS_KEYBOARD_H

/*****************************************************************************
**							  	  Includes									**
*****************************************************************************/

/*****************************************************************************
**								   Defines									**
*****************************************************************************/

namespace SIO
{

	

#define KEYBOARD_ON	(1)
			
enum
{
	vKB_LEFT	= 20,	// start it high so as not to interfere with button/pad enums 
	vKB_RIGHT,
	vKB_UP,
	vKB_DOWN,
	vKB_BACKSPACE,
	vKB_ENTER,
	vKB_ESCAPE,
	vKB_F1,
	vKB_F2,
	vKB_F3,
	vKB_F4
};

/*****************************************************************************
**							Class Definitions								**
*****************************************************************************/

/*****************************************************************************
**							 Private Declarations							**
*****************************************************************************/

/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/

/*****************************************************************************
**							  Public Declarations							**
*****************************************************************************/

/*****************************************************************************
**							   Public Prototypes							**
*****************************************************************************/

int KeyboardInit(void);
int KeyboardDeinit(void);
int KeyboardRead( char* makes );
void KeyboardClear( void );
void SetKeyboardActive(bool active);
void EnableKeyboard( bool enable );

/*****************************************************************************
**								Inline Functions							**
*****************************************************************************/

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

} // namespace SIO

#endif	// __SYS_KEYBOARD__H

