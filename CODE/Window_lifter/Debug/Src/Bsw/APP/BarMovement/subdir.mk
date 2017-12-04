################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/APP/BarMovement/BarCtrl.c" \

C_SRCS += \
../Src/Bsw/APP/BarMovement/BarCtrl.c \

OBJS_OS_FORMAT += \
./Src/Bsw/APP/BarMovement/BarCtrl.o \

C_DEPS_QUOTED += \
"./Src/Bsw/APP/BarMovement/BarCtrl.d" \

OBJS += \
./Src/Bsw/APP/BarMovement/BarCtrl.o \

OBJS_QUOTED += \
"./Src/Bsw/APP/BarMovement/BarCtrl.o" \

C_DEPS += \
./Src/Bsw/APP/BarMovement/BarCtrl.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/APP/BarMovement/BarCtrl.o: ../Src/Bsw/APP/BarMovement/BarCtrl.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/APP/BarMovement/BarCtrl.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/APP/BarMovement/BarCtrl.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


