#include "Mugen_Ledbackpack.h"
#include "Adafruit_GFX.h"

LedControl lc=LedControl(12,11,10,2);  // Pins: DIN,CLK,CS, # of Display connected

Mugen_LedBackpack::Mugen_LedBackpack(void){

}

void Mugen_LedBackpack::begin(){  
	lc.shutdown(0, false);
	lc.setIntensity(0, 5);
	lc.clearDisplay(0);
}

test_8x8matrix::test_8x8matrix(void) : Adafruit_GFX(8, 8){

}

void test_8x8matrix::clear(void){
	for(int8_t i=0; i<8; i++){
		displaybuffer[i]=0;
	}
}

void test_8x8matrix::writeDisplay(void){
	for(int8_t i=0; i<8; i++){
		lc.setRow(0, i, displaybuffer[i]);
	}
}

void test_8x8matrix::drawPixel(int16_t x, int16_t y, uint16_t color){
	if ((y < 0) || (y >= 8)) return;
	if ((x < 0) || (x >= 8)) return;

	// wrap around the x
 	x=7-x;
	if(color){
		displaybuffer[y] |= 1<<x;
	}
}













