
#include "button.h"

#define NUM_BUTTONS 4

Button* buttons[ NUM_BUTTONS ];

void setup()
{
    buttons[ 0 ] = new Button( 3, KEY_HOME );
    buttons[ 1 ] = new Button( 2, KEY_J );
    buttons[ 2 ] = new Button( 1, KEY_END );
    buttons[ 3 ] = new Button( 4, KEY_B );
}

void loop()
{
    for( int i = 0; i < NUM_BUTTONS; ++i )
    {
        buttons[ i ]->Update();
    }
}

