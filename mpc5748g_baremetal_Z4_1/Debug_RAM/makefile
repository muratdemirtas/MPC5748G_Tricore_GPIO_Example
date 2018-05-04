################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 6
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
-include src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
mpc5748g_baremetal_Z4_1.elf \

EXECUTABLES_QUOTED += \
"mpc5748g_baremetal_Z4_1.elf" \

EXECUTABLES_OS_FORMAT += \
mpc5748g_baremetal_Z4_1.elf \

SECONDARY_SIZE += \
mpc5748g_baremetal_Z4_1.siz \

SECONDARY_SIZE_QUOTED += \
"mpc5748g_baremetal_Z4_1.siz" \

SECONDARY_SIZE_OS_FORMAT += \
mpc5748g_baremetal_Z4_1.siz \


# All Target
all: warning-messages explicit-dependencies mpc5748g_baremetal_Z4_1.elf secondary-outputs

# Tool invocations
mpc5748g_baremetal_Z4_1.elf: $(OBJS) C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_1/Project_Settings/Linker_Files/57xx_ram.ld C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_1/Project_Settings/Linker_Files/libs.ld $(OSPT) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Executing target #7 $@'
	@echo 'Invoking: Standard S32DS C Linker'
	powerpc-eabivle-gcc -o "mpc5748g_baremetal_Z4_1.elf" "@mpc5748g_baremetal_Z4_1.args"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED) $(OSPT)
	@echo 'Finished building target: $@'
	@echo ' '

mpc5748g_baremetal_Z4_1.siz: $(EXECUTABLES)
	@echo 'Executing target #8 $@'
	@echo 'Invoking: Standard S32DS Print Size'
	powerpc-eabivle-size --format=berkeley $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*/*.d  ./*/*.o ./*/*/*.o  $(SECONDARY_SIZE_QUOTED) $(EXECUTABLES_QUOTED)
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: 

warning-messages: 

