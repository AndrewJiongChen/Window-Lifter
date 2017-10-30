################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/APP/windowlifter.c" \

C_SRCS += \
../src/APP/windowlifter.c \

OBJS_OS_FORMAT += \
./src/APP/windowlifter.o \

C_DEPS_QUOTED += \
"./src/APP/windowlifter.d" \

OBJS += \
./src/APP/windowlifter.o \

OBJS_QUOTED += \
"./src/APP/windowlifter.o" \

C_DEPS += \
./src/APP/windowlifter.d \


# Each subdirectory must supply rules for building sources it contributes
src/APP/windowlifter.o: ../src/APP/windowlifter.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/APP/windowlifter.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/APP/windowlifter.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


