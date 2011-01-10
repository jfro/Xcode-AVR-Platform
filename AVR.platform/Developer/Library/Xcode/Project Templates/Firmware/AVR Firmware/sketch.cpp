/*
 *  sketch.cpp
 *  ArduinoOnXcode
 *
 *  Created by Jeremy Knope on 1/4/11.
 *  Copyright 2011 Buttered Cat Software. All rights reserved.
 *
 */

#include "WProgram.h"

void blink(int n, int d);

int ledPin = 13; // LED connected to digital pin 13

void setup(){
	Serial.begin(9600);	// opens serial port, sets data rate to 9600 bps
	
	pinMode(ledPin, OUTPUT);      // sets the digital pin as output
	Serial.println("------------------");
	Serial.println("   hello world");
	Serial.println("------------------");
}


void loop(){
	
	blink(2, 500); // blink led 2 times, 500 ms interval
	delay(1000); // wait 1 sec
}




void blink(int n, int d){
	for (int i=0;i<n;i++)
	{
		digitalWrite(ledPin, HIGH);
		delay(d/2);
		digitalWrite(ledPin, LOW);
		delay(d/2);
	}
}
