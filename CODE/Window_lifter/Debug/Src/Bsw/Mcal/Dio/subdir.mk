################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Mcal/Dio/Dio.c" \

C_SRCS += \
../Src/Bsw/Mcal/Dio/Dio.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Mcal/Dio/Dio.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Mcal/Dio/Dio.d" \

OBJS += \
./Src/Bsw/Mcal/Dio/Dio.o \

OBJS_QUOTED += \
"./Src/Bsw/Mcal/Dio/Dio.o" \

C_DEPS += \
./Src/Bsw/Mcal/Dio/Dio.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Mcal/Dio/Dio.o: ../Src/Bsw/Mcal/Dio/Dio.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Mcal/Dio/Dio.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Mcal/Dio/Dio.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


