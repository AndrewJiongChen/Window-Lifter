################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/HAL/IO.c" \
"../src/HAL/clock.c" \
"../src/HAL/delay.c" \
"../src/HAL/wdog.c" \

C_SRCS += \
../src/HAL/IO.c \
../src/HAL/clock.c \
../src/HAL/delay.c \
../src/HAL/wdog.c \

OBJS_OS_FORMAT += \
./src/HAL/IO.o \
./src/HAL/clock.o \
./src/HAL/delay.o \
./src/HAL/wdog.o \

C_DEPS_QUOTED += \
"./src/HAL/IO.d" \
"./src/HAL/clock.d" \
"./src/HAL/delay.d" \
"./src/HAL/wdog.d" \

OBJS += \
./src/HAL/IO.o \
./src/HAL/clock.o \
./src/HAL/delay.o \
./src/HAL/wdog.o \

OBJS_QUOTED += \
"./src/HAL/IO.o" \
"./src/HAL/clock.o" \
"./src/HAL/delay.o" \
"./src/HAL/wdog.o" \

C_DEPS += \
./src/HAL/IO.d \
./src/HAL/clock.d \
./src/HAL/delay.d \
./src/HAL/wdog.d \


# Each subdirectory must supply rules for building sources it contributes
src/HAL/IO.o: ../src/HAL/IO.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/HAL/IO.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/HAL/IO.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/HAL/clock.o: ../src/HAL/clock.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/HAL/clock.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/HAL/clock.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/HAL/delay.o: ../src/HAL/delay.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/HAL/delay.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/HAL/delay.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/HAL/wdog.o: ../src/HAL/wdog.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/HAL/wdog.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/HAL/wdog.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


