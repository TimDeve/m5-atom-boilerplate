#include "M5Atom.h"


void setup()
{
    M5.begin(true, false, true);
}

void loop()
{
    M5.update();

    if (M5.Btn.wasPressed())
    {
        Serial.println("Click!");
    }
}
