/**
* @file application.cpp
* @author Mitchel Walker
* @date 11/19/2021
*
* @brief This file contains the primary functionality for the Ground Station
* 		 microcontroller that interfaces with the Ground Station Controller.
*
*/


#include "config.hpp"

//// Supported Processors
//#ifdef TARGET_STM32F7
//	#include <stm32f7xx.h>
//#endif
//#ifdef TARGET_STM32F4
//	#include <stm32f4xx.h>
//#endif

#include "application.hpp"
//#include <stdio.h>
#include "stm32f7xx.h"         		// Causes double include

//#include "stm32f767xx.h"  		// Compiles but does nothing
//#include "stm32f7xx_hal_gpio.h"   // 208 errors......
//#include "stm32f7xx_hal.h"  		// Causes double include


void sendRadioCommand(GSC::RADIO_COMMANDS command);


void start()
{
	init();
	launch();
}




void init()
{

}

//void sendRadioCommand(GSC::RADIO_COMMANDS command);


void launch()
{

	while (1)
	{

		if (HAL_GPIO_ReadPin(GSC::GPIO::Kill_Button::channel, GSC::GPIO::Kill_Button::pin))
		{
			sendRadioCommand(GSC::RADIO_COMMANDS::KILL);
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::Ramp::lower_Channel, GSC::GPIO::Belt::Ramp::lower_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::KILL);
		}

	}

}


void sendRadioCommand(GSC::RADIO_COMMANDS command)
//void sendRadioCommand()
{

}
