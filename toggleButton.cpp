#include "ToggleButton.h"

#include "WProgram.h"

ToggleButton::ToggleButton( int pin, int key )
:   Button( pin, key )
{
}

ToggleButton::~ToggleButton()
{
}

void ToggleButton::OnPressed( int key )
{
    Keyboard.press( key );
    delay( 250 );
    Keyboard.release( key );
}

void ToggleButton::OnReleased( int key )
{
    OnPressed( key );
}

