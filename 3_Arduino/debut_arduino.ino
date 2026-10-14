#include <Adafruit_CircuitPlayground.h>

void setup() {
  CircuitPlayground.begin();

}

void loop() {
// boucle lumiere rose
// for (int i=0; i < 10; i++){
//      CircuitPlayground.setPixelColor(i, 255, 0, 100);
//      delay(200);
//      CircuitPlayground.setPixelColor(i, 0, 0, 0);
   

// allumer lumiere rouge
//  if (CircuitPlayground.leftButton()){
//     CircuitPlayground.redLED(HIGH);
  
//   }
//   else {
//     CircuitPlayground.redLED(LOW);
//   }

  // if (CircuitPlayground.leftButton()){
  //   for (int i=0; i<10; i++){
  //     CircuitPlayground.setPixelColor(i, 255, 0, 0);
      
  //   }
  //   delay(200);
  //   CircuitPlayground.clearPixels();
  // }
  // if (CircuitPlayground.rightButton()){
  //   for (int i=0; i<10; i++){
  //     CircuitPlayground.setPixelColor(i, 0, 255, 0);
  //   }
  //   delay(200);
  //   CircuitPlayground.clearPixels();
  // }
  // for (int i=0; i<10; i++){
  //   CircuitPlayground.setPixelColor(i, 255, 0, 0);
  // }
  // delay(300);

  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i, 0, 255, 0);
  }
  delay(300);

  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i, 0, 0, 255);
  }
  delay(300);

  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i, 0, 100, 100);
  }
  delay(300);
  
  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i, 100, 0, 100);
  }
  delay(300);

  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i, 100, 100, 0);
  }
  delay(300);

  
  
}
