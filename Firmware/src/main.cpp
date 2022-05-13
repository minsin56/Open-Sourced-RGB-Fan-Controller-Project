#include <Arduino.h>
#include "LED.h"


static LED* Lights = new LED(6,7,8);

void setup() 
{
  Lights->Setup();
}

void loop() 
{
  Lights->SetColor(255,0,0);
  delay(100);
  Lights->SetColor(0,255,0);
  delay(100);
  Lights->SetColor(0,0,255);
  delay(100);
}