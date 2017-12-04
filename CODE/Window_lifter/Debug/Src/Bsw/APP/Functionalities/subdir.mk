################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/APP/Functionalities/windowFunctions.c" \

C_SRCS += \
../Src/Bsw/APP/Functionalities/windowFunctions.c \

OBJS_OS_FORMAT += \
./Src/Bsw/APP/Functionalities/windowFunctions.o \

C_DEPS_QUOTED += \
"./Src/Bsw/APP/Functionalities/windowFunctions.d" \

OBJS += \
./Src/Bsw/APP/Functionalities/windowFunctions.o \

OBJS_QUOTED += \
"./Src/Bsw/APP/Functionalities/windowFunctions.o" \

C_DEPS += \
./Src/Bsw/APP/Functionalities/windowFunctions.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/APP/Functionalities/windowFunctions.o: ../Src/Bsw/APP/Functionalities/windowFunctions.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/APP/Functionalities/windowFunctions.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/APP/Functionalities/windowFunctions.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


