################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Asw/Entry/Main.c" \

C_SRCS += \
../Src/Asw/Entry/Main.c \

OBJS_OS_FORMAT += \
./Src/Asw/Entry/Main.o \

C_DEPS_QUOTED += \
"./Src/Asw/Entry/Main.d" \

OBJS += \
./Src/Asw/Entry/Main.o \

OBJS_QUOTED += \
"./Src/Asw/Entry/Main.o" \

C_DEPS += \
./Src/Asw/Entry/Main.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Asw/Entry/Main.o: ../Src/Asw/Entry/Main.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Asw/Entry/Main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Asw/Entry/Main.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


