#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_PIXELS 120

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int delayval = 30;  // delay between changing the state of LEDs

void setup() {
  strip.begin();
  strip.show();
}

void loop() {

}
