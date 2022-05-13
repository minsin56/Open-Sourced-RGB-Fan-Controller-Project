#include "Arduino.h"
#include "LED.h"



LED::LED(int RPin,int GPin, int BPin)
{
    this->R = RPin;
    this->G = GPin;
    this->B = BPin;
}

void LED::Setup()
{
    pinMode(R,OUTPUT);
    pinMode(G,OUTPUT);
    pinMode(B,OUTPUT);

}

void LED::SetColor(int R,int G,int B)
{
    analogWrite(this->R,R);
    analogWrite(this->B, B);
    analogWrite(this->G, G);
}