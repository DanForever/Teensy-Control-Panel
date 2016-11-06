
#ifndef __ECP_HOLDBUTTON__
#define __ECP_HOLDBUTTON__

#include "button.h"

// Sends a keypressed event when the button is pressed, and a keyreleased event when the button is released
// Standard, use for all standard controls and all rocker switches bound to togglable controls (with the mode set to HOLD)
class HoldButton : public Button
{
public:
    HoldButton( int pin, int key );
    virtual ~HoldButton() override final;

protected:
    virtual void OnPressed( int key ) override final;
    virtual void OnReleased( int key ) override final;
};

#endif // __ECP_HOLDBUTTON__

