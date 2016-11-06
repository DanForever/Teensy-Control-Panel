#include "holdButton.h"
#include "toggleButton.h"

#define NUM_BUTTONS 5

Button* buttons[ NUM_BUTTONS ];

void setup()
{
    buttons[ 0 ] = new HoldButton( 3, KEY_HOME );
    buttons[ 1 ] = new HoldButton( 2, KEY_J );
    buttons[ 2 ] = new HoldButton( 1, KEY_END );
    buttons[ 3 ] = new HoldButton( 4, KEY_B );
    buttons[ 4 ] = new ToggleButton( 6, KEY_C );
}

void loop()
{
    for( int i = 0; i < NUM_BUTTONS; ++i )
    {
        buttons[ i ]->Update();
    }
}

