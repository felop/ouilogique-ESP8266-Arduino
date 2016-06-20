/*

  ESP8266 — TEST DES LED SUR BOARD AMICA
  http://ouilogique.com/NodeMCU_esp8266_amica/

  IDE ARDUINO 1.6.9 avec les librairies pour l’ESP8266
  https://github.com/adafruit/ESP8266-Arduino

  NOTES
  - Sur OSX, les bibliothèques sont installées dans le répertoire :
    ~/Library/Arduino15/packages/
  - La carte Amica a deux LED, une rouge (GPIO 16) et une bleue (GPIO 2).
  - Quelques variables pour cette carte sont définies dans le fichier
    ~/Library/Arduino15/packages/esp8266/hardware/esp8266/2.2.0/variants/nodemcu/pins_arduino.h

  PARAMÈTRES DE L’IDE
  Type de carte: "NodeMCU 1.0 (ESP-12E Module)"
  CPU Fequency: "80 MHz"             (fonctionne aussi avec l’overclock à 160 MHz)
  Flash Size: "4M (1M SPIFFS)"       (fonctionne aussi avec 4M (3M SPIFFS))
  Upload Speed: "115200"             (on peut aller plus vite, mais ça ne fonctionne pas toujours)

  CONNEXIONS
  Aucune connexions requises. Seules les LED intégrées à la carte sont utilisées.

*/

static const uint8_t LEDrouge = D0; // GPIO 16;
static const uint8_t LEDbleue = D4; // GPIO 2;
static const uint8_t LEDhigh  = 0;
static const uint8_t LEDlow   = 1;

void setup()
{
  pinMode( LEDbleue, OUTPUT );
  pinMode( LEDrouge, OUTPUT );
  digitalWrite( LEDbleue, LEDlow );
  digitalWrite( LEDrouge, LEDlow  );
}

void loop()
{
  digitalWrite( LEDbleue, LEDhigh );
  digitalWrite( LEDrouge, LEDlow  );
  delay( 60 );
  digitalWrite( LEDbleue, LEDlow  );
  digitalWrite( LEDrouge, LEDhigh );
  delay( 60 );
}