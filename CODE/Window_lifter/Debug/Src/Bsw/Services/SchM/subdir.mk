################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Src/Bsw/Services/SchM/SchM.c" \
"../Src/Bsw/Services/SchM/SchM_Cfg.c" \
"../Src/Bsw/Services/SchM/SchM_Tasks.c" \

C_SRCS += \
../Src/Bsw/Services/SchM/SchM.c \
../Src/Bsw/Services/SchM/SchM_Cfg.c \
../Src/Bsw/Services/SchM/SchM_Tasks.c \

OBJS_OS_FORMAT += \
./Src/Bsw/Services/SchM/SchM.o \
./Src/Bsw/Services/SchM/SchM_Cfg.o \
./Src/Bsw/Services/SchM/SchM_Tasks.o \

C_DEPS_QUOTED += \
"./Src/Bsw/Services/SchM/SchM.d" \
"./Src/Bsw/Services/SchM/SchM_Cfg.d" \
"./Src/Bsw/Services/SchM/SchM_Tasks.d" \

OBJS += \
./Src/Bsw/Services/SchM/SchM.o \
./Src/Bsw/Services/SchM/SchM_Cfg.o \
./Src/Bsw/Services/SchM/SchM_Tasks.o \

OBJS_QUOTED += \
"./Src/Bsw/Services/SchM/SchM.o" \
"./Src/Bsw/Services/SchM/SchM_Cfg.o" \
"./Src/Bsw/Services/SchM/SchM_Tasks.o" \

C_DEPS += \
./Src/Bsw/Services/SchM/SchM.d \
./Src/Bsw/Services/SchM/SchM_Cfg.d \
./Src/Bsw/Services/SchM/SchM_Tasks.d \


# Each subdirectory must supply rules for building sources it contributes
Src/Bsw/Services/SchM/SchM.o: ../Src/Bsw/Services/SchM/SchM.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Services/SchM/SchM.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Services/SchM/SchM.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/Bsw/Services/SchM/SchM_Cfg.o: ../Src/Bsw/Services/SchM/SchM_Cfg.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Services/SchM/SchM_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Services/SchM/SchM_Cfg.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Src/Bsw/Services/SchM/SchM_Tasks.o: ../Src/Bsw/Services/SchM/SchM_Tasks.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Src/Bsw/Services/SchM/SchM_Tasks.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "Src/Bsw/Services/SchM/SchM_Tasks.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


