################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Hal/Buttons/Buttons.c" \

C_SRCS += \
../Src/Bsw/Hal/Buttons/Buttons.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Hal/Buttons/Buttons.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Hal/Buttons/Buttons.d" \

OBJS += \
./Src/Bsw/Hal/Buttons/Buttons.o \

OBJS_QUOTED += \
"./Src/Bsw/Hal/Buttons/Buttons.o" \

C_DEPS += \
./Src/Bsw/Hal/Buttons/Buttons.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Hal/Buttons/Buttons.o: ../Src/Bsw/Hal/Buttons/Buttons.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Hal/Buttons/Buttons.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Hal/Buttons/Buttons.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


