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
  int length = 5;
  int offset = NUM_PIXELS / 2;
  int j = 0;
  for (int i = 0; i < NUM_PIXELS+2*length; i++) {
    if (i < NUM_PIXELS) {
      strip.setPixelColor(i, strip.Color(10, 5, 13));
      if (i > length) strip.setPixelColor(i - length, strip.Color(0, 0, 0));
     }
     if (i > 2*length) {
       strip.setPixelColor(j, strip.Color(13, 7, 4));
       if (j > length) strip.setPixelColor(j - length, strip.Color(0, 0, 0));
       j++;
     }
     strip.show();
     delay(delayval);
  }
  for (int i = 0; i < NUM_PIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();
}
