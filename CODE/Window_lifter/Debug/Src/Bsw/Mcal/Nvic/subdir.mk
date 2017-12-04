################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Mcal/Nvic/Nvic.c" \

C_SRCS += \
../Src/Bsw/Mcal/Nvic/Nvic.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Mcal/Nvic/Nvic.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Mcal/Nvic/Nvic.d" \

OBJS += \
./Src/Bsw/Mcal/Nvic/Nvic.o \

OBJS_QUOTED += \
"./Src/Bsw/Mcal/Nvic/Nvic.o" \

C_DEPS += \
./Src/Bsw/Mcal/Nvic/Nvic.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Mcal/Nvic/Nvic.o: ../Src/Bsw/Mcal/Nvic/Nvic.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Mcal/Nvic/Nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Mcal/Nvic/Nvic.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


