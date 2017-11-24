################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/main.c" \

C_SRCS += \
../Src/main.c \

OBJS_OS_FORMAT += \
./Src/main.o \

C_DEPS_QUOTED += \
"./Src/main.d" \

OBJS += \
./Src/main.o \

OBJS_QUOTED += \
"./Src/main.o" \

C_DEPS += \
./Src/main.d \


# Each subdirectory must supply rules for building sources it contributes
Src/main.o: ../Src/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


