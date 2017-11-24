################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Mcal/Wdog/Wdog.c" \

C_SRCS += \
../Src/Bsw/Mcal/Wdog/Wdog.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Mcal/Wdog/Wdog.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Mcal/Wdog/Wdog.d" \

OBJS += \
./Src/Bsw/Mcal/Wdog/Wdog.o \

OBJS_QUOTED += \
"./Src/Bsw/Mcal/Wdog/Wdog.o" \

C_DEPS += \
./Src/Bsw/Mcal/Wdog/Wdog.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Mcal/Wdog/Wdog.o: ../Src/Bsw/Mcal/Wdog/Wdog.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Mcal/Wdog/Wdog.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Mcal/Wdog/Wdog.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


