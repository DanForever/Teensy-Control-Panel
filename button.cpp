#include "button.h"
#include "WProgram.h"
#include <Bounce.h>

Button::Button( int pin, int key )
:   _key( key )
,   _pin( pin )
{
    _bounce = new Bounce( pin, 10 );
    pinMode( pin, INPUT_PULLUP );
}

Button::~Button()
{
    delete _bounce;
    _bounce = nullptr;
}

void Button::Update()
{
    _bounce->update();
    Hold();
    Debug();
}

void Button::Hold()
{
    if( _bounce->fallingEdge() )
    {
        Keyboard.press( _key );
    }
    else if( _bounce->risingEdge() )
    {
        Keyboard.release( _key );
    }
}

void Button::Debug()
{
    if( _bounce->fallingEdge() )
    {
        Serial.print( "Pin " );
        Serial.print( _pin, DEC );
        Serial.println( " Pressed!" );
    }
    else if( _bounce->risingEdge() )
    {
        Serial.print( "Pin " );
        Serial.print( _pin, DEC );
        Serial.println( " Released!" );
    }
}

