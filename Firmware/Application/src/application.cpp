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
//#include "stm32f7xx.h"         		// Causes double include

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
	bool internal_belt_active = false;
	bool external_belt_active = false;

	bool trim_enabled = false;

	while (1)
	{
		// Buttons
		if (HAL_GPIO_ReadPin(GSC::GPIO::Kill_Button::channel, GSC::GPIO::Kill_Button::pin))
		{
			sendRadioCommand(GSC::RADIO_COMMANDS::KILL);
			HAL_GPIO_WritePin(GSC::GPIO::LED::Caution::channel, GSC::GPIO::LED::Caution::pin, GPIO_PIN_SET);
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::Ramp::lower_Channel, GSC::GPIO::Belt::Ramp::lower_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::RAMP_DOWN);
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::Ramp::raise_channel, GSC::GPIO::Belt::Ramp::raise_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::RAMP_UP);
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::Internal::deploy_channel, GSC::GPIO::Belt::Internal::deploy_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::INTERNAL_DEPLOY);
			internal_belt_active = true;
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::Internal::retract_channel, GSC::GPIO::Belt::Internal::retract_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::INTERNAL_RETRACT);
			internal_belt_active = true;
		}
		else if (internal_belt_active) {
			sendRadioCommand(GSC::RADIO_COMMANDS::INTERNAL_HALT);
			internal_belt_active = false;
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::External::deploy_channel, GSC::GPIO::Belt::External::deploy_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::EXTERNAL_DEPLOY);
			external_belt_active = true;
		}
		else if (HAL_GPIO_ReadPin(GSC::GPIO::Belt::External::retract_channel, GSC::GPIO::Belt::External::retract_pin)) {
			sendRadioCommand(GSC::RADIO_COMMANDS::EXTERNAL_RETRACT);
			external_belt_active = true;
		}
		else if (external_belt_active) {
			sendRadioCommand(GSC::RADIO_COMMANDS::EXTERNAL_HALT);
			external_belt_active = false;
		}

		trim_enabled = (bool) HAL_GPIO_ReadPin(GSC::GPIO::Trim_Enable::channel, GSC::GPIO::Trim_Enable::pin));


		// Analog
		if (trim_enabled) {
			HAL_ADC_Start(&hadc1);
			HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);
			raw = HAL_ADC_GetValue(&hadc1);
		}
	}
}


void sendRadioCommand(GSC::RADIO_COMMANDS command)
//void sendRadioCommand()
{

}
