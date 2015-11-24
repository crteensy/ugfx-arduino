#include <teensy3.1-ssd1351-ugfx-config.h>
#include <SPI.h>

void setup() {
  coord_t    width, height;
  coord_t   i, j;

  SPI.begin();

  // Initialize and clear the display
  gfxInit();

  // Get the screen size
  width = gdispGetWidth();
  height = gdispGetHeight();

  // Code Here
  gdispDrawBox(10, 10, width / 2, height / 2, Yellow);
  gdispFillArea(width / 2, height / 2, width / 2 - 10, height / 2 - 10, Blue);
  gdispDrawLine(5, 30, width - 50, height - 40, Red);

  for (i = 5, j = 0; i < width && j < height; i += 7, j += i / 20)
    gdispDrawPixel(i, j, White);

  SPI.end();
}

void loop() {
}

