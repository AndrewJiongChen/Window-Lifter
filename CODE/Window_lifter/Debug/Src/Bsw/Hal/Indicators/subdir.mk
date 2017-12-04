################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Hal/Indicators/LEDs.c" \

C_SRCS += \
../Src/Bsw/Hal/Indicators/LEDs.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Hal/Indicators/LEDs.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Hal/Indicators/LEDs.d" \

OBJS += \
./Src/Bsw/Hal/Indicators/LEDs.o \

OBJS_QUOTED += \
"./Src/Bsw/Hal/Indicators/LEDs.o" \

C_DEPS += \
./Src/Bsw/Hal/Indicators/LEDs.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Hal/Indicators/LEDs.o: ../Src/Bsw/Hal/Indicators/LEDs.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Hal/Indicators/LEDs.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Hal/Indicators/LEDs.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


