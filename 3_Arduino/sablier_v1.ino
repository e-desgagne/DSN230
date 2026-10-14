#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();
}

void loop() {
  float forceY = CircuitPlayground.motionY();

  if (abs(forceY) > 13.0) { 
    
    for (int i = 0; i < 10; i++) {
      CircuitPlayground.setPixelColor(i, 255, 100, 0);
    }
    
    for (int etape = 0; etape < 5; etape++) {
      delay(2000); 
      
      CircuitPlayground.setPixelColor(4 - etape, 0, 0, 0); 
      CircuitPlayground.setPixelColor(5 + etape, 0, 0, 0); 
    }

    CircuitPlayground.playTone(600, 200); 
  }
  
  delay(100); 
}
