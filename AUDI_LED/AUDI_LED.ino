/*
   Funktion:        LEDs sollen im Laufmuster aufleuchten
   Programierer:    Eric Junker
   letzte Änderung: 22.09.2020
   Version:         1.0
   Hardware:        Pin 2-5 rote LEDs im Laufmuster
                    Pin 6-9 grüne LEDs im Laufmzuster
*/
byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9};
byte ledZustand[6][8] = {
  {1, 0, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
};

void setup()
{
  /******Pinbelegung********/
  for (byte i = 0; i < 8; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  for (byte i = 0; i < 6; i++)      //Zeilen
  {
    for (byte j = 0; j < 8; j++)    //Spalten
    {
      digitalWrite(led[j], ledZustand[i][j]);
    }
    delay(150);
  }
}
