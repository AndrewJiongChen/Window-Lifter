################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../include/MAL/lib_port.c" \

C_SRCS += \
../include/MAL/lib_port.c \

OBJS_OS_FORMAT += \
./include/MAL/lib_port.o \

C_DEPS_QUOTED += \
"./include/MAL/lib_port.d" \

OBJS += \
./include/MAL/lib_port.o \

OBJS_QUOTED += \
"./include/MAL/lib_port.o" \

C_DEPS += \
./include/MAL/lib_port.d \


# Each subdirectory must supply rules for building sources it contributes
include/MAL/lib_port.o: ../include/MAL/lib_port.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@include/MAL/lib_port.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "include/MAL/lib_port.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


