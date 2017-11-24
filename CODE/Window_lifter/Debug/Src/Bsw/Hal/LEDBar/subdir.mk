################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Hal/LEDBar/LEDBar.c" \

C_SRCS += \
../Src/Bsw/Hal/LEDBar/LEDBar.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Hal/LEDBar/LEDBar.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Hal/LEDBar/LEDBar.d" \

OBJS += \
./Src/Bsw/Hal/LEDBar/LEDBar.o \

OBJS_QUOTED += \
"./Src/Bsw/Hal/LEDBar/LEDBar.o" \

C_DEPS += \
./Src/Bsw/Hal/LEDBar/LEDBar.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Hal/LEDBar/LEDBar.o: ../Src/Bsw/Hal/LEDBar/LEDBar.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Hal/LEDBar/LEDBar.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Hal/LEDBar/LEDBar.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


