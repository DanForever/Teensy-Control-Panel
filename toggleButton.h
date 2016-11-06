
#ifndef __ECP_TOGGLEBUTTON__
#define __ECP_TOGGLEBUTTON__

#include "button.h"

// This class will send a key pressed / key released pair whenever the button state changes
// Use this when you have a rocker switch but need to emulate toggle controls (such as Landing Gear, which has no hold option)
class ToggleButton : public Button
{
public:
    ToggleButton( int pin, int key );
    virtual ~ToggleButton() override final;

protected:
    virtual void OnPressed( int key ) override final;
    virtual void OnReleased( int key ) override final;
};

#endif // __ECP_TOGGLEBUTTON__

