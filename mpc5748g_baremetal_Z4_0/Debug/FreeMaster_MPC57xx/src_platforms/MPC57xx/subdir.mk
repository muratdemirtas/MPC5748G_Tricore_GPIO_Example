################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"C:/NXP/S32DS_Power_v2017.R1/S32DS/FreeMASTER_Serial_Communication_Driver_V2_0/src_platforms/MPC57xx/freemaster_MPC57xx.c" \

C_SRCS += \
C:/NXP/S32DS_Power_v2017.R1/S32DS/FreeMASTER_Serial_Communication_Driver_V2_0/src_platforms/MPC57xx/freemaster_MPC57xx.c \

OBJS_OS_FORMAT += \
./FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.o \

C_DEPS_QUOTED += \
"./FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.d" \

OBJS += \
./FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.o \

OBJS_QUOTED += \
"./FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.o" \

C_DEPS += \
./FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.d \


# Each subdirectory must supply rules for building sources it contributes
FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.o: C:/NXP/S32DS_Power_v2017.R1/S32DS/FreeMASTER_Serial_Communication_Driver_V2_0/src_platforms/MPC57xx/freemaster_MPC57xx.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "FreeMaster_MPC57xx/src_platforms/MPC57xx/freemaster_MPC57xx.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


