################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/BBServo.cpp \
C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/BrushlessMotor.cpp \
C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/TimServo.cpp \
C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/nRF24L01.cpp 

OBJS += \
./Lib/Drivers/src/BBServo.o \
./Lib/Drivers/src/BrushlessMotor.o \
./Lib/Drivers/src/TimServo.o \
./Lib/Drivers/src/nRF24L01.o 

CPP_DEPS += \
./Lib/Drivers/src/BBServo.d \
./Lib/Drivers/src/BrushlessMotor.d \
./Lib/Drivers/src/TimServo.d \
./Lib/Drivers/src/nRF24L01.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/Drivers/src/BBServo.o: C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/BBServo.cpp Lib/Drivers/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../../Application/inc -I../../../../CatLib/Drivers/inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Lib/Drivers/src/BrushlessMotor.o: C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/BrushlessMotor.cpp Lib/Drivers/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../../Application/inc -I../../../../CatLib/Drivers/inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Lib/Drivers/src/TimServo.o: C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/TimServo.cpp Lib/Drivers/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../../Application/inc -I../../../../CatLib/Drivers/inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
Lib/Drivers/src/nRF24L01.o: C:/Projects/CaseAeronauticsTeam/CatLib/Drivers/src/nRF24L01.cpp Lib/Drivers/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../../Application/inc -I../../../../CatLib/Drivers/inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

