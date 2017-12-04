################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Mcal/Port/Port.c" \

C_SRCS += \
../Src/Bsw/Mcal/Port/Port.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Mcal/Port/Port.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Mcal/Port/Port.d" \

OBJS += \
./Src/Bsw/Mcal/Port/Port.o \

OBJS_QUOTED += \
"./Src/Bsw/Mcal/Port/Port.o" \

C_DEPS += \
./Src/Bsw/Mcal/Port/Port.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Mcal/Port/Port.o: ../Src/Bsw/Mcal/Port/Port.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Mcal/Port/Port.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Mcal/Port/Port.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


