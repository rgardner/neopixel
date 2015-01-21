#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_PIXELS 120

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int delayval = 30; // delay for half a second

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  int offset = NUM_PIXELS / 2;
  for (int i = 0; i < NUM_PIXELS; i++){
    strip.setPixelColor(i, strip.Color(10, 5, 13));
    strip.setPixelColor(NUM_PIXELS - i, strip.Color(5, 30, 17));
    strip.show();
    delay(delayval);
  }
  for (int i = offset; i >= 0; i--) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.setPixelColor(NUM_PIXELS - i, strip.Color(0, 0, 0));
    strip.show();
    delay(delayval);
  }
}
