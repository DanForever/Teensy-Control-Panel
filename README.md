# Teensy-Control-Panel
A program for the PJRC Teensy 3.2 (Written primarily in mind with the purpose of powering a control panel for Elite Dangerous)

## How to use
You'll want to open up elite_cp.ino and modify the buttons array.
Set the `NUM_BUTTONS` #define to the number of buttons you've wired in, and then define the buttons in `setup()` in a similar fashion to:
    buttons[ 0 ] = new HoldButton( 3, KEY_HOME );
    buttons[ 1 ] = new HoldButton( 2, KEY_J );
    buttons[ 2 ] = new HoldButton( 1, KEY_END );
    buttons[ 3 ] = new HoldButton( 4, KEY_B );
    buttons[ 4 ] = new ToggleButton( 6, KEY_L );
The first parameter is the pin, the second is the key to invoke when pressed
    
### HoldButton
This is your typical button that you'll want to use for most things. Behaves as you would expect in that it sends a key-down event when pressed, and a key-up event when released.
You'll want to use this for all standard controls, and any toggle switches you've wired up for controls that can be toggled between Toggle/Hold (with those controls set to hold).

### ToggleButton
The primary function for this one is to enable a toggle switch to be used for a toggle control that cannot be set to hold mode (more specifically, the landing gear).
It sends a pair of key-down/up events when the button is both pressed, and again when it's released

##TODO:
*Make a more user friendly configuration file instead of using the .ino
*Make the debugging optional with a `#define`
