################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO\ Driver/DIO_PROG.c 

OBJS += \
./DIO\ Driver/DIO_PROG.o 

C_DEPS += \
./DIO\ Driver/DIO_PROG.d 


# Each subdirectory must supply rules for building sources it contributes
DIO\ Driver/DIO_PROG.o: ../DIO\ Driver/DIO_PROG.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"DIO Driver/DIO_PROG.d" -MT"DIO\ Driver/DIO_PROG.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


