#include "LedControl.h"
#include "Adafruit_GFX.h"


class Mugen_LedBackpack {
public:
	Mugen_LedBackpack(void);
	void begin(void);
	uint16_t displaybuffer[8];
};

class test_8x8matrix : public Mugen_LedBackpack, public Adafruit_GFX{
public:
	test_8x8matrix(void);
	void drawPixel(int16_t x, int16_t y, uint16_t color);
	void drawRound(void);
	void clear(void);
	void writeDisplay(void);
private:
};