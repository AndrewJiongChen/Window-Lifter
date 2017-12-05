################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 18
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include Project_Settings/Linker_Files/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include Src/Asw/Entry/subdir.mk
-include Src/Bsw/APP/Functionalities/subdir.mk
-include Src/Bsw/APP/LEDBarDriver/subdir.mk
-include Src/Bsw/Hal/Buttons/subdir.mk
-include Src/Bsw/Hal/Indicators/subdir.mk
-include Src/Bsw/Hal/LEDBar/subdir.mk
-include Src/Bsw/Mcal/Dio/subdir.mk
-include Src/Bsw/Mcal/Lpit/subdir.mk
-include Src/Bsw/Mcal/Mcu/subdir.mk
-include Src/Bsw/Mcal/Nvic/subdir.mk
-include Src/Bsw/Mcal/Port/subdir.mk
-include Src/Bsw/Mcal/Wdog/subdir.mk
-include Src/Bsw/Services/SchM/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Scheduler.elf \

EXECUTABLES_QUOTED += \
"Scheduler.elf" \

EXECUTABLES_OS_FORMAT += \
Scheduler.elf \

SECONDARY_SIZE += \
Scheduler.siz \

SECONDARY_SIZE_QUOTED += \
"Scheduler.siz" \

SECONDARY_SIZE_OS_FORMAT += \
Scheduler.siz \


# All Target
all: warning-messages explicit-dependencies Scheduler.elf secondary-outputs

# Tool invocations
Scheduler.elf: $(OBJS) C:/Users/carlo/OneDrive/Documentos/Continental/Desarrollo_NXP/Scheduler/Project_Settings/Linker_Files/S32K1xx_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Executing target #19 $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "Scheduler.elf" "@Scheduler.args"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED)
	@echo 'Finished building target: $@'
	@echo ' '

Scheduler.siz: $(EXECUTABLES)
	@echo 'Executing target #20 $@'
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*/*/*/*/*.d ./*/*/*/*.d ./*/*/*.d  ./*/*/*/*/*.o ./*/*/*/*.o ./*/*/*.o  $(SECONDARY_SIZE_QUOTED) $(EXECUTABLES_QUOTED)
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: 

warning-messages: 

