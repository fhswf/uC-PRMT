################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/zumolib/Src/zumo/bluetooth.c \
../Drivers/zumolib/Src/zumo/bno055.c \
../Drivers/zumolib/Src/zumo/bno055_stm32.c \
../Drivers/zumolib/Src/zumo/display.c \
../Drivers/zumolib/Src/zumo/distance.c \
../Drivers/zumolib/Src/zumo/gpio_sx1508.c \
../Drivers/zumolib/Src/zumo/motors.c \
../Drivers/zumolib/Src/zumo/simple.c \
../Drivers/zumolib/Src/zumo/systick.c \
../Drivers/zumolib/Src/zumo/uart.c \
../Drivers/zumolib/Src/zumo/vl53l0x.c \
../Drivers/zumolib/Src/zumo/vl53l0x_i2c.c 

OBJS += \
./Drivers/zumolib/Src/zumo/bluetooth.o \
./Drivers/zumolib/Src/zumo/bno055.o \
./Drivers/zumolib/Src/zumo/bno055_stm32.o \
./Drivers/zumolib/Src/zumo/display.o \
./Drivers/zumolib/Src/zumo/distance.o \
./Drivers/zumolib/Src/zumo/gpio_sx1508.o \
./Drivers/zumolib/Src/zumo/motors.o \
./Drivers/zumolib/Src/zumo/simple.o \
./Drivers/zumolib/Src/zumo/systick.o \
./Drivers/zumolib/Src/zumo/uart.o \
./Drivers/zumolib/Src/zumo/vl53l0x.o \
./Drivers/zumolib/Src/zumo/vl53l0x_i2c.o 

C_DEPS += \
./Drivers/zumolib/Src/zumo/bluetooth.d \
./Drivers/zumolib/Src/zumo/bno055.d \
./Drivers/zumolib/Src/zumo/bno055_stm32.d \
./Drivers/zumolib/Src/zumo/display.d \
./Drivers/zumolib/Src/zumo/distance.d \
./Drivers/zumolib/Src/zumo/gpio_sx1508.d \
./Drivers/zumolib/Src/zumo/motors.d \
./Drivers/zumolib/Src/zumo/simple.d \
./Drivers/zumolib/Src/zumo/systick.d \
./Drivers/zumolib/Src/zumo/uart.d \
./Drivers/zumolib/Src/zumo/vl53l0x.d \
./Drivers/zumolib/Src/zumo/vl53l0x_i2c.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/zumolib/Src/zumo/%.o Drivers/zumolib/Src/zumo/%.su: ../Drivers/zumolib/Src/zumo/%.c Drivers/zumolib/Src/zumo/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/zumolib/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O2 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-zumolib-2f-Src-2f-zumo

clean-Drivers-2f-zumolib-2f-Src-2f-zumo:
	-$(RM) ./Drivers/zumolib/Src/zumo/bluetooth.d ./Drivers/zumolib/Src/zumo/bluetooth.o ./Drivers/zumolib/Src/zumo/bluetooth.su ./Drivers/zumolib/Src/zumo/bno055.d ./Drivers/zumolib/Src/zumo/bno055.o ./Drivers/zumolib/Src/zumo/bno055.su ./Drivers/zumolib/Src/zumo/bno055_stm32.d ./Drivers/zumolib/Src/zumo/bno055_stm32.o ./Drivers/zumolib/Src/zumo/bno055_stm32.su ./Drivers/zumolib/Src/zumo/display.d ./Drivers/zumolib/Src/zumo/display.o ./Drivers/zumolib/Src/zumo/display.su ./Drivers/zumolib/Src/zumo/distance.d ./Drivers/zumolib/Src/zumo/distance.o ./Drivers/zumolib/Src/zumo/distance.su ./Drivers/zumolib/Src/zumo/gpio_sx1508.d ./Drivers/zumolib/Src/zumo/gpio_sx1508.o ./Drivers/zumolib/Src/zumo/gpio_sx1508.su ./Drivers/zumolib/Src/zumo/motors.d ./Drivers/zumolib/Src/zumo/motors.o ./Drivers/zumolib/Src/zumo/motors.su ./Drivers/zumolib/Src/zumo/simple.d ./Drivers/zumolib/Src/zumo/simple.o ./Drivers/zumolib/Src/zumo/simple.su ./Drivers/zumolib/Src/zumo/systick.d ./Drivers/zumolib/Src/zumo/systick.o ./Drivers/zumolib/Src/zumo/systick.su ./Drivers/zumolib/Src/zumo/uart.d ./Drivers/zumolib/Src/zumo/uart.o ./Drivers/zumolib/Src/zumo/uart.su ./Drivers/zumolib/Src/zumo/vl53l0x.d ./Drivers/zumolib/Src/zumo/vl53l0x.o ./Drivers/zumolib/Src/zumo/vl53l0x.su ./Drivers/zumolib/Src/zumo/vl53l0x_i2c.d ./Drivers/zumolib/Src/zumo/vl53l0x_i2c.o ./Drivers/zumolib/Src/zumo/vl53l0x_i2c.su

.PHONY: clean-Drivers-2f-zumolib-2f-Src-2f-zumo

