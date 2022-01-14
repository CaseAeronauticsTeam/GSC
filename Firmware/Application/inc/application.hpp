/**
* @file application.hpp
* @author Mitchel Walker
* @date 11/19/2021
*
* @brief This file contains the primary functionality for the Ground Station
* 		 microcontroller that interfaces with the Embedded Flight Controller.
*
*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif




void start();

void init();

void launch();


#ifdef __cplusplus
}
#endif



//void sendRadioCommand();
//void sendRadioCommand(GSC::RADIO_COMMANDS command);
