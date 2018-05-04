################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 19
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include FreeMaster_MPC57xx/src_common/subdir.mk
-include FreeMaster_MPC57xx/src_platforms/MPC57xx/subdir.mk
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
mpc5748g_baremetal_Z4_0.elf \

EXECUTABLES_QUOTED += \
"mpc5748g_baremetal_Z4_0.elf" \

EXECUTABLES_OS_FORMAT += \
mpc5748g_baremetal_Z4_0.elf \

SECONDARY_SIZE += \
mpc5748g_baremetal_Z4_0.siz \

SECONDARY_SIZE_QUOTED += \
"mpc5748g_baremetal_Z4_0.siz" \

SECONDARY_SIZE_OS_FORMAT += \
mpc5748g_baremetal_Z4_0.siz \


# All Target
all: warning-messages explicit-dependencies mpc5748g_baremetal_Z4_0.elf secondary-outputs

dependents:
	-cd "C:\Users\murat\MPC5674_CPU0\mpc5748g_baremetal\mpc5748g_baremetal_Z4_1\Debug" && $(MAKE) all
	-cd "C:\Users\murat\MPC5674_CPU0\mpc5748g_baremetal\mpc5748g_baremetal_Z2\Debug" && $(MAKE) all

# Tool invocations
mpc5748g_baremetal_Z4_0.elf: $(OBJS) C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_0/Project_Settings/Linker_Files/57xx_flash.ld C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_0/Project_Settings/Linker_Files/libs.ld $(OSPT) $(USER_OBJS) C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_1/Debug/mpc5748g_baremetal_Z4_1.elf C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z2/Debug/mpc5748g_baremetal_Z2.elf
	@echo 'Building target: $@'
	@echo 'Executing target #20 $@'
	@echo 'Invoking: Standard S32DS C Linker'
	powerpc-eabivle-gcc -o "mpc5748g_baremetal_Z4_0.elf" "@mpc5748g_baremetal_Z4_0.args"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED) $(OSPT)
	@echo 'Finished building target: $@'
	@echo ' '

mpc5748g_baremetal_Z4_0.siz: $(EXECUTABLES)
	@echo 'Executing target #21 $@'
	@echo 'Invoking: Standard S32DS Print Size'
	powerpc-eabivle-size --format=berkeley $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*/*.d ./*/*/*/*.d ./*/*/*.d  ./*/*.o ./*/*/*.o ./*/*/*/*.o  $(SECONDARY_SIZE_QUOTED) $(EXECUTABLES_QUOTED)
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:
C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z4_1/Debug/mpc5748g_baremetal_Z4_1.elf:
C:/Users/murat/MPC5674_CPU0/mpc5748g_baremetal/mpc5748g_baremetal_Z2/Debug/mpc5748g_baremetal_Z2.elf:

-include ../makefile.targets

explicit-dependencies: 

warning-messages: 

