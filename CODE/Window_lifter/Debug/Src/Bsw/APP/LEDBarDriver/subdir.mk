################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/APP/LEDBarDriver/LEDBarDriver.c" \

C_SRCS += \
../Src/Bsw/APP/LEDBarDriver/LEDBarDriver.c \

OBJS_OS_FORMAT += \
./Src/Bsw/APP/LEDBarDriver/LEDBarDriver.o \

C_DEPS_QUOTED += \
"./Src/Bsw/APP/LEDBarDriver/LEDBarDriver.d" \

OBJS += \
./Src/Bsw/APP/LEDBarDriver/LEDBarDriver.o \

OBJS_QUOTED += \
"./Src/Bsw/APP/LEDBarDriver/LEDBarDriver.o" \

C_DEPS += \
./Src/Bsw/APP/LEDBarDriver/LEDBarDriver.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/APP/LEDBarDriver/LEDBarDriver.o: ../Src/Bsw/APP/LEDBarDriver/LEDBarDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/APP/LEDBarDriver/LEDBarDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/APP/LEDBarDriver/LEDBarDriver.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


