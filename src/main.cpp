// Le code minimal
#include <FastLED.h>
#include <Arduino.h> 
#define MA_BROCHE_ANGLE 32

CRGB pixelAtom;

void setup() {
  Serial.begin(115200);

  FastLED.addLeds<WS2812, 27, GRB>(&pixelAtom, 1); 
  
}

void loop() {
  
  int maLectureAnalogique = analogRead(MA_BROCHE_ANGLE);

  Serial.print(maLectureAnalogique);
  Serial.println();
  delay(100);


  if (maLectureAnalogique > 4095 / 2) {
    pixelAtom = CRGB(255,255,255); // BLANC
    FastLED.show();

  } else {
    pixelAtom = CRGB(0,0,0); // NOIR
    FastLED.show();
  }

 



}
