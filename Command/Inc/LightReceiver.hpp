#ifndef LIGHT_RECEIVER_HPP
#define LIGHT_RECEIVER_HPP

class LightReceiver
{
public:
    LightReceiver();
    ~LightReceiver();

    void turn_on();
    void turn_off();

    bool getState();

private:
    bool state_ = false;
};

#endif // LIGHT_RECEIVER_HPP
