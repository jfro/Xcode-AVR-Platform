#include "WProgram.h"

// this is for a bug in Arduino 017/018:
extern "C" void __cxa_pure_virtual() { while (1); }

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

