################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/zumolib/Src/u8g2/u8g2_bitmap.c \
../Drivers/zumolib/Src/u8g2/u8g2_box.c \
../Drivers/zumolib/Src/u8g2/u8g2_buffer.c \
../Drivers/zumolib/Src/u8g2/u8g2_circle.c \
../Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.c \
../Drivers/zumolib/Src/u8g2/u8g2_d_memory.c \
../Drivers/zumolib/Src/u8g2/u8g2_d_setup.c \
../Drivers/zumolib/Src/u8g2/u8g2_font.c \
../Drivers/zumolib/Src/u8g2/u8g2_fonts.c \
../Drivers/zumolib/Src/u8g2/u8g2_hvline.c \
../Drivers/zumolib/Src/u8g2/u8g2_input_value.c \
../Drivers/zumolib/Src/u8g2/u8g2_intersection.c \
../Drivers/zumolib/Src/u8g2/u8g2_kerning.c \
../Drivers/zumolib/Src/u8g2/u8g2_line.c \
../Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.c \
../Drivers/zumolib/Src/u8g2/u8g2_message.c \
../Drivers/zumolib/Src/u8g2/u8g2_polygon.c \
../Drivers/zumolib/Src/u8g2/u8g2_selection_list.c \
../Drivers/zumolib/Src/u8g2/u8g2_setup.c \
../Drivers/zumolib/Src/u8g2/u8log.c \
../Drivers/zumolib/Src/u8g2/u8log_u8g2.c \
../Drivers/zumolib/Src/u8g2/u8log_u8x8.c \
../Drivers/zumolib/Src/u8g2/u8x8_8x8.c \
../Drivers/zumolib/Src/u8g2/u8x8_byte.c \
../Drivers/zumolib/Src/u8g2/u8x8_cad.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.c \
../Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.c \
../Drivers/zumolib/Src/u8g2/u8x8_debounce.c \
../Drivers/zumolib/Src/u8g2/u8x8_display.c \
../Drivers/zumolib/Src/u8g2/u8x8_fonts.c \
../Drivers/zumolib/Src/u8g2/u8x8_gpio.c \
../Drivers/zumolib/Src/u8g2/u8x8_input_value.c \
../Drivers/zumolib/Src/u8g2/u8x8_message.c \
../Drivers/zumolib/Src/u8g2/u8x8_selection_list.c \
../Drivers/zumolib/Src/u8g2/u8x8_setup.c \
../Drivers/zumolib/Src/u8g2/u8x8_string.c \
../Drivers/zumolib/Src/u8g2/u8x8_u16toa.c \
../Drivers/zumolib/Src/u8g2/u8x8_u8toa.c 

OBJS += \
./Drivers/zumolib/Src/u8g2/u8g2_bitmap.o \
./Drivers/zumolib/Src/u8g2/u8g2_box.o \
./Drivers/zumolib/Src/u8g2/u8g2_buffer.o \
./Drivers/zumolib/Src/u8g2/u8g2_circle.o \
./Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.o \
./Drivers/zumolib/Src/u8g2/u8g2_d_memory.o \
./Drivers/zumolib/Src/u8g2/u8g2_d_setup.o \
./Drivers/zumolib/Src/u8g2/u8g2_font.o \
./Drivers/zumolib/Src/u8g2/u8g2_fonts.o \
./Drivers/zumolib/Src/u8g2/u8g2_hvline.o \
./Drivers/zumolib/Src/u8g2/u8g2_input_value.o \
./Drivers/zumolib/Src/u8g2/u8g2_intersection.o \
./Drivers/zumolib/Src/u8g2/u8g2_kerning.o \
./Drivers/zumolib/Src/u8g2/u8g2_line.o \
./Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.o \
./Drivers/zumolib/Src/u8g2/u8g2_message.o \
./Drivers/zumolib/Src/u8g2/u8g2_polygon.o \
./Drivers/zumolib/Src/u8g2/u8g2_selection_list.o \
./Drivers/zumolib/Src/u8g2/u8g2_setup.o \
./Drivers/zumolib/Src/u8g2/u8log.o \
./Drivers/zumolib/Src/u8g2/u8log_u8g2.o \
./Drivers/zumolib/Src/u8g2/u8log_u8x8.o \
./Drivers/zumolib/Src/u8g2/u8x8_8x8.o \
./Drivers/zumolib/Src/u8g2/u8x8_byte.o \
./Drivers/zumolib/Src/u8g2/u8x8_cad.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.o \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.o \
./Drivers/zumolib/Src/u8g2/u8x8_debounce.o \
./Drivers/zumolib/Src/u8g2/u8x8_display.o \
./Drivers/zumolib/Src/u8g2/u8x8_fonts.o \
./Drivers/zumolib/Src/u8g2/u8x8_gpio.o \
./Drivers/zumolib/Src/u8g2/u8x8_input_value.o \
./Drivers/zumolib/Src/u8g2/u8x8_message.o \
./Drivers/zumolib/Src/u8g2/u8x8_selection_list.o \
./Drivers/zumolib/Src/u8g2/u8x8_setup.o \
./Drivers/zumolib/Src/u8g2/u8x8_string.o \
./Drivers/zumolib/Src/u8g2/u8x8_u16toa.o \
./Drivers/zumolib/Src/u8g2/u8x8_u8toa.o 

C_DEPS += \
./Drivers/zumolib/Src/u8g2/u8g2_bitmap.d \
./Drivers/zumolib/Src/u8g2/u8g2_box.d \
./Drivers/zumolib/Src/u8g2/u8g2_buffer.d \
./Drivers/zumolib/Src/u8g2/u8g2_circle.d \
./Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.d \
./Drivers/zumolib/Src/u8g2/u8g2_d_memory.d \
./Drivers/zumolib/Src/u8g2/u8g2_d_setup.d \
./Drivers/zumolib/Src/u8g2/u8g2_font.d \
./Drivers/zumolib/Src/u8g2/u8g2_fonts.d \
./Drivers/zumolib/Src/u8g2/u8g2_hvline.d \
./Drivers/zumolib/Src/u8g2/u8g2_input_value.d \
./Drivers/zumolib/Src/u8g2/u8g2_intersection.d \
./Drivers/zumolib/Src/u8g2/u8g2_kerning.d \
./Drivers/zumolib/Src/u8g2/u8g2_line.d \
./Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.d \
./Drivers/zumolib/Src/u8g2/u8g2_message.d \
./Drivers/zumolib/Src/u8g2/u8g2_polygon.d \
./Drivers/zumolib/Src/u8g2/u8g2_selection_list.d \
./Drivers/zumolib/Src/u8g2/u8g2_setup.d \
./Drivers/zumolib/Src/u8g2/u8log.d \
./Drivers/zumolib/Src/u8g2/u8log_u8g2.d \
./Drivers/zumolib/Src/u8g2/u8log_u8x8.d \
./Drivers/zumolib/Src/u8g2/u8x8_8x8.d \
./Drivers/zumolib/Src/u8g2/u8x8_byte.d \
./Drivers/zumolib/Src/u8g2/u8x8_cad.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.d \
./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.d \
./Drivers/zumolib/Src/u8g2/u8x8_debounce.d \
./Drivers/zumolib/Src/u8g2/u8x8_display.d \
./Drivers/zumolib/Src/u8g2/u8x8_fonts.d \
./Drivers/zumolib/Src/u8g2/u8x8_gpio.d \
./Drivers/zumolib/Src/u8g2/u8x8_input_value.d \
./Drivers/zumolib/Src/u8g2/u8x8_message.d \
./Drivers/zumolib/Src/u8g2/u8x8_selection_list.d \
./Drivers/zumolib/Src/u8g2/u8x8_setup.d \
./Drivers/zumolib/Src/u8g2/u8x8_string.d \
./Drivers/zumolib/Src/u8g2/u8x8_u16toa.d \
./Drivers/zumolib/Src/u8g2/u8x8_u8toa.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/zumolib/Src/u8g2/%.o Drivers/zumolib/Src/u8g2/%.su: ../Drivers/zumolib/Src/u8g2/%.c Drivers/zumolib/Src/u8g2/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F103xB -c -I"C:/Workspace_STM/ZumoSTM32_V3_Demo/Drivers/zumolib/Inc" -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O1 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-zumolib-2f-Src-2f-u8g2

clean-Drivers-2f-zumolib-2f-Src-2f-u8g2:
	-$(RM) ./Drivers/zumolib/Src/u8g2/u8g2_bitmap.d ./Drivers/zumolib/Src/u8g2/u8g2_bitmap.o ./Drivers/zumolib/Src/u8g2/u8g2_bitmap.su ./Drivers/zumolib/Src/u8g2/u8g2_box.d ./Drivers/zumolib/Src/u8g2/u8g2_box.o ./Drivers/zumolib/Src/u8g2/u8g2_box.su ./Drivers/zumolib/Src/u8g2/u8g2_buffer.d ./Drivers/zumolib/Src/u8g2/u8g2_buffer.o ./Drivers/zumolib/Src/u8g2/u8g2_buffer.su ./Drivers/zumolib/Src/u8g2/u8g2_circle.d ./Drivers/zumolib/Src/u8g2/u8g2_circle.o ./Drivers/zumolib/Src/u8g2/u8g2_circle.su ./Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.d ./Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.o ./Drivers/zumolib/Src/u8g2/u8g2_cleardisplay.su ./Drivers/zumolib/Src/u8g2/u8g2_d_memory.d ./Drivers/zumolib/Src/u8g2/u8g2_d_memory.o ./Drivers/zumolib/Src/u8g2/u8g2_d_memory.su ./Drivers/zumolib/Src/u8g2/u8g2_d_setup.d ./Drivers/zumolib/Src/u8g2/u8g2_d_setup.o ./Drivers/zumolib/Src/u8g2/u8g2_d_setup.su ./Drivers/zumolib/Src/u8g2/u8g2_font.d ./Drivers/zumolib/Src/u8g2/u8g2_font.o ./Drivers/zumolib/Src/u8g2/u8g2_font.su ./Drivers/zumolib/Src/u8g2/u8g2_fonts.d ./Drivers/zumolib/Src/u8g2/u8g2_fonts.o ./Drivers/zumolib/Src/u8g2/u8g2_fonts.su ./Drivers/zumolib/Src/u8g2/u8g2_hvline.d ./Drivers/zumolib/Src/u8g2/u8g2_hvline.o ./Drivers/zumolib/Src/u8g2/u8g2_hvline.su ./Drivers/zumolib/Src/u8g2/u8g2_input_value.d ./Drivers/zumolib/Src/u8g2/u8g2_input_value.o ./Drivers/zumolib/Src/u8g2/u8g2_input_value.su ./Drivers/zumolib/Src/u8g2/u8g2_intersection.d ./Drivers/zumolib/Src/u8g2/u8g2_intersection.o ./Drivers/zumolib/Src/u8g2/u8g2_intersection.su ./Drivers/zumolib/Src/u8g2/u8g2_kerning.d ./Drivers/zumolib/Src/u8g2/u8g2_kerning.o ./Drivers/zumolib/Src/u8g2/u8g2_kerning.su ./Drivers/zumolib/Src/u8g2/u8g2_line.d ./Drivers/zumolib/Src/u8g2/u8g2_line.o ./Drivers/zumolib/Src/u8g2/u8g2_line.su ./Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.d ./Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.o ./Drivers/zumolib/Src/u8g2/u8g2_ll_hvline.su ./Drivers/zumolib/Src/u8g2/u8g2_message.d ./Drivers/zumolib/Src/u8g2/u8g2_message.o ./Drivers/zumolib/Src/u8g2/u8g2_message.su ./Drivers/zumolib/Src/u8g2/u8g2_polygon.d ./Drivers/zumolib/Src/u8g2/u8g2_polygon.o ./Drivers/zumolib/Src/u8g2/u8g2_polygon.su ./Drivers/zumolib/Src/u8g2/u8g2_selection_list.d ./Drivers/zumolib/Src/u8g2/u8g2_selection_list.o ./Drivers/zumolib/Src/u8g2/u8g2_selection_list.su ./Drivers/zumolib/Src/u8g2/u8g2_setup.d ./Drivers/zumolib/Src/u8g2/u8g2_setup.o ./Drivers/zumolib/Src/u8g2/u8g2_setup.su ./Drivers/zumolib/Src/u8g2/u8log.d ./Drivers/zumolib/Src/u8g2/u8log.o ./Drivers/zumolib/Src/u8g2/u8log.su ./Drivers/zumolib/Src/u8g2/u8log_u8g2.d ./Drivers/zumolib/Src/u8g2/u8log_u8g2.o ./Drivers/zumolib/Src/u8g2/u8log_u8g2.su ./Drivers/zumolib/Src/u8g2/u8log_u8x8.d ./Drivers/zumolib/Src/u8g2/u8log_u8x8.o ./Drivers/zumolib/Src/u8g2/u8log_u8x8.su ./Drivers/zumolib/Src/u8g2/u8x8_8x8.d ./Drivers/zumolib/Src/u8g2/u8x8_8x8.o ./Drivers/zumolib/Src/u8g2/u8x8_8x8.su ./Drivers/zumolib/Src/u8g2/u8x8_byte.d ./Drivers/zumolib/Src/u8g2/u8x8_byte.o ./Drivers/zumolib/Src/u8g2/u8x8_byte.su ./Drivers/zumolib/Src/u8g2/u8x8_cad.d ./Drivers/zumolib/Src/u8g2/u8x8_cad.o ./Drivers/zumolib/Src/u8g2/u8x8_cad.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ks0108.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x32.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_128x64_noname.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_48x64.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x32.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_64x48.su ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.d ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.o ./Drivers/zumolib/Src/u8g2/u8x8_d_ssd1306_96x16.su ./Drivers/zumolib/Src/u8g2/u8x8_debounce.d ./Drivers/zumolib/Src/u8g2/u8x8_debounce.o ./Drivers/zumolib/Src/u8g2/u8x8_debounce.su ./Drivers/zumolib/Src/u8g2/u8x8_display.d ./Drivers/zumolib/Src/u8g2/u8x8_display.o ./Drivers/zumolib/Src/u8g2/u8x8_display.su ./Drivers/zumolib/Src/u8g2/u8x8_fonts.d ./Drivers/zumolib/Src/u8g2/u8x8_fonts.o ./Drivers/zumolib/Src/u8g2/u8x8_fonts.su ./Drivers/zumolib/Src/u8g2/u8x8_gpio.d ./Drivers/zumolib/Src/u8g2/u8x8_gpio.o ./Drivers/zumolib/Src/u8g2/u8x8_gpio.su ./Drivers/zumolib/Src/u8g2/u8x8_input_value.d ./Drivers/zumolib/Src/u8g2/u8x8_input_value.o ./Drivers/zumolib/Src/u8g2/u8x8_input_value.su ./Drivers/zumolib/Src/u8g2/u8x8_message.d ./Drivers/zumolib/Src/u8g2/u8x8_message.o ./Drivers/zumolib/Src/u8g2/u8x8_message.su ./Drivers/zumolib/Src/u8g2/u8x8_selection_list.d ./Drivers/zumolib/Src/u8g2/u8x8_selection_list.o ./Drivers/zumolib/Src/u8g2/u8x8_selection_list.su ./Drivers/zumolib/Src/u8g2/u8x8_setup.d ./Drivers/zumolib/Src/u8g2/u8x8_setup.o ./Drivers/zumolib/Src/u8g2/u8x8_setup.su ./Drivers/zumolib/Src/u8g2/u8x8_string.d ./Drivers/zumolib/Src/u8g2/u8x8_string.o ./Drivers/zumolib/Src/u8g2/u8x8_string.su ./Drivers/zumolib/Src/u8g2/u8x8_u16toa.d ./Drivers/zumolib/Src/u8g2/u8x8_u16toa.o ./Drivers/zumolib/Src/u8g2/u8x8_u16toa.su ./Drivers/zumolib/Src/u8g2/u8x8_u8toa.d ./Drivers/zumolib/Src/u8g2/u8x8_u8toa.o ./Drivers/zumolib/Src/u8g2/u8x8_u8toa.su

.PHONY: clean-Drivers-2f-zumolib-2f-Src-2f-u8g2

