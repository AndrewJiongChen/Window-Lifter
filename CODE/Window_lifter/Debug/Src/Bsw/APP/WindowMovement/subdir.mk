################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/APP/WindowMovement/windowlifter.c" \

C_SRCS += \
../Src/Bsw/APP/WindowMovement/windowlifter.c \

OBJS_OS_FORMAT += \
./Src/Bsw/APP/WindowMovement/windowlifter.o \

C_DEPS_QUOTED += \
"./Src/Bsw/APP/WindowMovement/windowlifter.d" \

OBJS += \
./Src/Bsw/APP/WindowMovement/windowlifter.o \

OBJS_QUOTED += \
"./Src/Bsw/APP/WindowMovement/windowlifter.o" \

C_DEPS += \
./Src/Bsw/APP/WindowMovement/windowlifter.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/APP/WindowMovement/windowlifter.o: ../Src/Bsw/APP/WindowMovement/windowlifter.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/APP/WindowMovement/windowlifter.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/APP/WindowMovement/windowlifter.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


