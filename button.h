
#ifndef __ECP_Button__
#define __ECP_Button__

class Bounce;

class Button
{
public:
    Button( int pin, int key );
    virtual ~Button();

    virtual void Update();

protected:
    virtual void OnPressed( int key ) = 0;
    virtual void OnReleased( int key ) = 0;

private:
    void Poll();

    void Debug();
    
    Bounce* _bounce;

    int _key;
    int _pin;
};

#endif // __ECP_Button__

