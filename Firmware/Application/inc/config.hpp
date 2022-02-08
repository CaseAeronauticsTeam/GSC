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
//#define TARGET_STM32F7
#define TARGET_STM32F4


// Pin Macros
#define KILL_PIN GPIOG, GPIO_PIN_1


namespace GSC {

	enum RADIO_COMMANDS {KILL, TRIM,
					     RAMP_UP, RAMP_DOWN,
						 INTERNAL_DEPLOY, INTERNAL_RETRACT, INTERNAL_HALT,
						 EXTERNAL_DEPLOY, EXTERNAL_RETRACT, EXTERNAL_HALT};

	namespace GPIO {
		namespace Kill_Button {
			GPIO_TypeDef*  channel = GPIOB;
			const uint16_t pin = 0;
		}
		namespace Belt {
			namespace Internal {
				GPIO_TypeDef*  deploy_channel = GPIOB;
				const uint16_t deploy_pin = 0;
				GPIO_TypeDef*  retract_channel = GPIOB;
				const uint16_t retract_pin = 0;
			}
			namespace External {
				GPIO_TypeDef*  deploy_channel = GPIOB;
				const uint16_t deploy_pin = 0;
				GPIO_TypeDef*  retract_channel = GPIOB;
				const uint16_t retract_pin = 0;
			}
			namespace Ramp {
				GPIO_TypeDef*  raise_channel = GPIOB;
				const uint16_t raise_pin = 0;
				GPIO_TypeDef*  lower_Channel = GPIOB;
				const uint16_t lower_pin = 0;
			}
		}
		namespace Trim_Enable {
			GPIO_TypeDef*  channel = GPIOB;
			const uint16_t pin = 0;
		}
		namespace LED {
			namespace Radio_link {
				GPIO_TypeDef*  channel = GPIOB;
				const uint16_t pin = 0;
			}
			namespace Caution {
				GPIO_TypeDef*  channel = GPIOB;
				const uint16_t pin = 0;
			}
			namespace Battery_Low {
				GPIO_TypeDef*  channel = GPIOB;
				const uint16_t pin = 0;
			}
			namespace Battery_Good {
				GPIO_TypeDef*  channel = GPIOB;
				const uint16_t pin = 0;
			}
		}
		namespace Buzzer {
			GPIO_TypeDef*  channel = GPIOB;
			const uint16_t pin = 0;
		}

	}
}
