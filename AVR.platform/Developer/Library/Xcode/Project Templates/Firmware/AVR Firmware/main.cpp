//
//  main.cpp
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "WProgram.h"

void init(void);
void setup(void);
void loop(void);

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

