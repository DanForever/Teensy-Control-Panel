
#ifndef __ECP_BUTTON__
#define __ECP_BUTTON__

class Bounce;

class Button
{
private:
    int _key;
    int _pin;

    Bounce* _bounce;
    
public:
    Button( int pin, int key );
    ~Button();

    void Update();

private:
    void Hold();
    void Debug();
};

#endif // __ECP_BUTTON__

