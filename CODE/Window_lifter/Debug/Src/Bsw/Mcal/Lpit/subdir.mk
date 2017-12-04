################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Mcal/Lpit/Lpit.c" \

C_SRCS += \
../Src/Bsw/Mcal/Lpit/Lpit.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Mcal/Lpit/Lpit.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Mcal/Lpit/Lpit.d" \

OBJS += \
./Src/Bsw/Mcal/Lpit/Lpit.o \

OBJS_QUOTED += \
"./Src/Bsw/Mcal/Lpit/Lpit.o" \

C_DEPS += \
./Src/Bsw/Mcal/Lpit/Lpit.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Mcal/Lpit/Lpit.o: ../Src/Bsw/Mcal/Lpit/Lpit.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Mcal/Lpit/Lpit.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Mcal/Lpit/Lpit.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


