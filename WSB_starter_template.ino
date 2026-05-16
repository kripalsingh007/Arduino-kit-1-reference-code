// this is the basic code for using WSB Led's, you can take refrence of this code to complete tasks

#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT  16   // This defines the number of LED's in your module

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
  strip.begin();
  
  // Set all LEDs to red
  for(int i = 0; i < LED_COUNT; i++) 
  {
    strip.setPixelColor(i, strip.Color(255, 0, 0));  // R : Red, G : Green, B : Blue
  }

  strip.show();
}

void loop() 
{
  // Nothing here
}
