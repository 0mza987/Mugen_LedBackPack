#include "LedControl.h"
#include "Adafruit_GFX.h"
#include "Mugen_Ledbackpack.h"

test_8x8matrix matrix= test_8x8matrix();

void setup() {
  matrix.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix.clear();
  matrix.writeDisplay();
  delay(1000);
  
  matrix.drawFilledCircle(1,6,1,1);
  delay(1000);

//  matrix.animEnlargeCircle(matrix.getCurrPositionX(),matrix.getCurrPositionY(),1,3,1000,1);
//  delay(1000);
//
//  matrix.animShrinkCircle(matrix.getCurrPositionX(),matrix.getCurrPositionY(),3,1,1000,1);
//  delay(1000);
//  matrix.getCurrPositionX(),matrix.getCurrPositionY()
  matrix.animMoveFilledCircle(matrix.getCurrPositionX(),matrix.getCurrPositionY(),1,6,3,200,1);
  delay(1000);

//  matrix.clear();
//  matrix.writeDisplay();
//  matrix.drawFilledCircle(matrix.getCurrPositionX(),matrix.getCurrPositionY(),1,1);
//  delay(2000);


  matrix.animCircleToDash(matrix.getCurrPositionX(),matrix.getCurrPositionY(),1,2,1);
  delay(2000);
}
