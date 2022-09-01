/*
 * main.cpp
 *
 *  Created on: 31/08/2022
 *      Author: anali
 */

#include <stdio.h>
#include <stdint.h>
#include <string>
#include "mxc_device.h"
#include "led.h"
#include "board.h"
#include "mxc_delay.h"

class Module
{
public:
	static void setup()
	{
		std::string str("Hello World. Setup\n");
		printf(str.c_str());
	}

	static void loop()
	{
		static int count = 0;
		LED_On(0);
		MXC_Delay(500000);
		LED_Off(0);
		MXC_Delay(500000);
		printf("count = %d\n", count++);
	}
};

int main(void)
{
	Module::setup();
	for(;;)
		Module::loop();
//	 int count = 0;
//
//	    printf("Hello World!\n");
//
//	    while (1) {
//	        LED_On(0);
//	        MXC_Delay(500000);
//	        LED_Off(0);
//	        MXC_Delay(500000);
//	        printf("count = %d\n", count++);
//	    }
}
