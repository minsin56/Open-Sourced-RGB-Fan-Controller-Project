#pragma once

class LED
{
public:
    LED(int RPin,int GPin,int BPin);    
    int R,G,B;

    void Setup();
    void SetColor(int R,int G,int B);
};