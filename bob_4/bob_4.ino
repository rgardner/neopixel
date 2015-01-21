#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_PIXELS 120

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int delayval = 15; // delay for half a second

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  for (int i = 10; i < 40; i++) {
    strip.setPixelColor(i, strip.Color(5, 5, 5));
    strip.show();
    delay(delayval);
  }
  for (int i = 40; i >= 10; i--) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
    delay(delayval);
  }
  for (int i = 10; i >= 0; i--) {
    strip.setPixelColor(i, strip.Color(5, 5, 5));
    strip.show();
    delay(delayval);
  }
  for (int i = 0; i < 10; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
    strip.show();
    delay(delayval);
  }
  for (int i = 10; i < 30; i++) {
    strip.setPixelColor(i, strip.Color(5, 5, 5));
    strip.show();
    delay(delayval);
  }
  clearStrip();
}

void clearStrip() {
  for (int i = 0; i < NUM_PIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();
}

void splash(int center, int radius, strip.Color color) {
  for (int i = 0; i < radius; i++) {
    if (center+i > NUM_PIXELS) strip.setPixelColor(center + i, color);
    if (center-i < 0) strip.setPixelColor(center - i, color);
    strip.show();
  }
}
