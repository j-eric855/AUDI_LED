/*
   Funktion:        LEDs sollen im Laufmuster aufleuchten
   Programierer:    Eric Junker
   letzte Änderung: 22.09.2020
   Version:         1.0
   Hardware:        Pin 2-5 rote LEDs im Laufmuster
                    Pin 6-9 grüne LEDs im Laufmzuster
*/
byte LED[8] = {2, 3, 4, 5, 6, 7, 8, 9};

#define Laufzeit 100  // Verzögerung in ms zwischen den LEDs wird eingestellt

void setup()
{
  /******Pinbelegung********/
  for (byte i = 0; i < 8; i++)
  {
    pinMode(LED[i], OUTPUT);
  }
}

void loop()
{
  for (byte i = 0; i < 8; i++)
  {
    digitalWrite(LED[i], HIGH);
    delay(Laufzeit);
    digitalWrite(LED[i], LOW);
  }

  for (byte i = 6; i > 0; i--)
  {
    digitalWrite(LED[i], HIGH);
    delay(Laufzeit);
    digitalWrite(LED[i], LOW);
  }
}
