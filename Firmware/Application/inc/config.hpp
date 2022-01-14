/**
* @file config.hpp
* @author Mitchel Walker
* @date 11/19/2021
*
* @brief This file contains configuration values and constants for the
* 		 Ground Station Controller.
*
*/
#pragma once

#include <stm32f7xx.h>


// Select Target MCU for conditional includes in driver files
#define TARGET_STM32F7


// Pin Macros
#define KILL_PIN GPIOG, GPIO_PIN_1


namespace GSC {

	enum RADIO_COMMANDS {KILL, TRIM};

	namespace GPIO {
		namespace Kill_Button {
			GPIO_TypeDef*  channel = GPIOB;
			const uint16_t pin = 0;
		}
		namespace Belt {
			namespace Internal {
				GPIO_TypeDef*  deploy_channel = GPIOB;
				const uint16_t deploy_pin = 0;
				GPIO_TypeDef*  Retract_Channel = GPIOB;
				const uint16_t retract_pin = 0;
			}
			namespace External {
				GPIO_TypeDef*  deploy_channel = GPIOB;
				const uint16_t deploy_pin = 0;
				GPIO_TypeDef*  Retract_Channel = GPIOB;
				const uint16_t retract_pin = 0;
			}
			namespace Ramp {
				GPIO_TypeDef*  raise_channel = GPIOB;
				const uint16_t raise_pin = 0;
				GPIO_TypeDef*  lower_Channel = GPIOB;
				const uint16_t lower_pin = 0;
			}


		}


		const uint16_t Kill_Button_Pin = 0;


	}
}
