#include "HoldButton.h"

#include "WProgram.h"

HoldButton::HoldButton( int pin, int key )
:   Button( pin, key )
{
}

HoldButton::~HoldButton()
{
}

void HoldButton::OnPressed( int key )
{
    Keyboard.press( key );
}

void HoldButton::OnReleased( int key )
{
    Keyboard.release( key );
}

