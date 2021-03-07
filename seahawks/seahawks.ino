#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_PIXELS 120

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN);

int delayval = 500;  // delay between changing the state of LEDs

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  const uint32_t navy = strip.Color(0, 21, 50);
  const uint32_t green = strip.Color(115, 190, 35);
  strip.setBrightness(30);
  for (int i = 0; i < NUM_PIXELS; i++) {
    if (i % 2) {
      strip.setPixelColor(i, navy);
    } else {
      strip.setPixelColor(i, green);
    }
  }

  strip.show();
  delay(delayval);

  for (int i = 0; i < NUM_PIXELS; i++) {
    if (i % 2) {
      strip.setPixelColor(i, green);
    } else {
      strip.setPixelColor(i, navy);
    }
  }

  strip.show();
  delay(delayval);
}
