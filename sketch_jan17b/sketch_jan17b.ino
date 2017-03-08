/*
This example simply starts a mouse and randomly moves it around, while clicking random buttons
*/

#include <TrinketMouse.h>

int led = 1;
int stat;

void setup()
{
  TrinketMouse.begin();
  pinMode(led, OUTPUT);
  stat = 0;
}

void loop()
{
  if (stat == 0)
  {
    digitalWrite(led, HIGH);
    stat = 1;
  }
  else {
    digitalWrite(led, LOW);
    stat = 0;
  }
  // unsigned long secs_to_wait = random(1, 2);
  signed char x = random(-1, 1);
  signed char y = random(-1, 1);
  unsigned long time_stamp = millis();
  while (millis() < (time_stamp + 1000))
  {
    TrinketMouse.move(x, y, 0, 0);
  }
}
