################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../src/MAL/lib_gpio.c" \
"../src/MAL/lib_pcc.c" \
"../src/MAL/lib_port.c" \
"../src/MAL/lib_scg.c" \
"../src/MAL/lib_wdog.c" \

C_SRCS += \
../src/MAL/lib_gpio.c \
../src/MAL/lib_pcc.c \
../src/MAL/lib_port.c \
../src/MAL/lib_scg.c \
../src/MAL/lib_wdog.c \

OBJS_OS_FORMAT += \
./src/MAL/lib_gpio.o \
./src/MAL/lib_pcc.o \
./src/MAL/lib_port.o \
./src/MAL/lib_scg.o \
./src/MAL/lib_wdog.o \

C_DEPS_QUOTED += \
"./src/MAL/lib_gpio.d" \
"./src/MAL/lib_pcc.d" \
"./src/MAL/lib_port.d" \
"./src/MAL/lib_scg.d" \
"./src/MAL/lib_wdog.d" \

OBJS += \
./src/MAL/lib_gpio.o \
./src/MAL/lib_pcc.o \
./src/MAL/lib_port.o \
./src/MAL/lib_scg.o \
./src/MAL/lib_wdog.o \

OBJS_QUOTED += \
"./src/MAL/lib_gpio.o" \
"./src/MAL/lib_pcc.o" \
"./src/MAL/lib_port.o" \
"./src/MAL/lib_scg.o" \
"./src/MAL/lib_wdog.o" \

C_DEPS += \
./src/MAL/lib_gpio.d \
./src/MAL/lib_pcc.d \
./src/MAL/lib_port.d \
./src/MAL/lib_scg.d \
./src/MAL/lib_wdog.d \


# Each subdirectory must supply rules for building sources it contributes
src/MAL/lib_gpio.o: ../src/MAL/lib_gpio.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MAL/lib_gpio.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MAL/lib_gpio.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/MAL/lib_pcc.o: ../src/MAL/lib_pcc.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MAL/lib_pcc.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MAL/lib_pcc.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/MAL/lib_port.o: ../src/MAL/lib_port.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MAL/lib_port.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MAL/lib_port.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/MAL/lib_scg.o: ../src/MAL/lib_scg.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MAL/lib_scg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MAL/lib_scg.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/MAL/lib_wdog.o: ../src/MAL/lib_wdog.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/MAL/lib_wdog.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MAL/lib_wdog.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


