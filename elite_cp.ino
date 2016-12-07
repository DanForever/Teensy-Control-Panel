#include "holdButton.h"
#include "toggleButton.h"

#define NUM_BUTTONS 16

Button* buttons[ NUM_BUTTONS ];

void setup()
{
    // Landing Gear
    buttons[  0 ] = new ToggleButton( 22, KEY_L );

    // Flight Assist
    buttons[  1 ] = new HoldButton( 20, KEY_Z );

    // Lights
    buttons[  2 ] = new ToggleButton( 21, KEY_INSERT );

    // Cargo Scoop
    buttons[  3 ] = new HoldButton( 23, KEY_HOME );

    // Rotational Correction
    buttons[  4 ] = new HoldButton( 24, KEY_LEFT_BRACE );

    // Silent Running
    buttons[  5 ] = new HoldButton( 5, KEY_DELETE );

    // Heat Sink
    buttons[  6 ] = new HoldButton( 19, KEY_V );

    // Frameshift Jump
    buttons[  7 ] = new HoldButton( 18, KEY_J );

    // Jettison All Cargo
    buttons[  8 ] = new HoldButton( 7, KEY_END );

    // Supercruise
    buttons[  9 ] = new HoldButton( 17, KEY_K );

    // Galaxy Map
    buttons[ 10 ] = new HoldButton( 2, KEY_F4 );

    // System Map
    buttons[ 11 ] = new HoldButton( 1, KEY_F3 );

    // Highest Threat
    buttons[ 12 ] = new HoldButton( 3, KEY_H );

    // Next Hostile Target
    buttons[ 13 ] = new HoldButton( 4, KEY_B );

    // Next Target
    buttons[ 14 ] = new HoldButton( 6, KEY_G );

    // Next System in Route
    buttons[ 15 ] = new HoldButton( 16, KEY_O );
}

void loop()
{
    for( int i = 0; i < NUM_BUTTONS; ++i )
    {
        buttons[ i ]->Update();
    }
}

