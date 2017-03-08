
#include <TrinketKeyboard.h>

void setup()
{
  // start USB stuff
  TrinketKeyboard.begin();
  randomSeed(millis()); // seed the RNG
  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0, 0);
  delay(5000);
  TrinketKeyboard.print("notepad");
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);  
  TrinketKeyboard.pressKey(0, 0);
}

void loop()
{
  unsigned long t = random(500, 3000);
  unsigned long now = millis();
  while (millis() < (now + t))
  {
    TrinketKeyboard.poll();
  }
  TrinketKeyboard.typeChar((char)random(33, 122));
}
