################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS_QUOTED += \
"../src/intc_sw_handlers.S" \

C_SRCS_QUOTED += \
"../src/MPC57xx__Interrupt_Init.c" \
"../src/Vector.c" \
"../src/intc_SW_mode_isr_vectors_MPC5748G.c" \
"../src/main_Z4_0.c" \

S_UPPER_SRCS += \
../src/intc_sw_handlers.S \

C_SRCS += \
../src/MPC57xx__Interrupt_Init.c \
../src/Vector.c \
../src/intc_SW_mode_isr_vectors_MPC5748G.c \
../src/main_Z4_0.c \

OBJS_OS_FORMAT += \
./src/MPC57xx__Interrupt_Init.o \
./src/Vector.o \
./src/intc_SW_mode_isr_vectors_MPC5748G.o \
./src/intc_sw_handlers.o \
./src/main_Z4_0.o \

C_DEPS_QUOTED += \
"./src/MPC57xx__Interrupt_Init.d" \
"./src/Vector.d" \
"./src/intc_SW_mode_isr_vectors_MPC5748G.d" \
"./src/main_Z4_0.d" \

OBJS += \
./src/MPC57xx__Interrupt_Init.o \
./src/Vector.o \
./src/intc_SW_mode_isr_vectors_MPC5748G.o \
./src/intc_sw_handlers.o \
./src/main_Z4_0.o \

OBJS_QUOTED += \
"./src/MPC57xx__Interrupt_Init.o" \
"./src/Vector.o" \
"./src/intc_SW_mode_isr_vectors_MPC5748G.o" \
"./src/intc_sw_handlers.o" \
"./src/main_Z4_0.o" \

C_DEPS += \
./src/MPC57xx__Interrupt_Init.d \
./src/Vector.d \
./src/intc_SW_mode_isr_vectors_MPC5748G.d \
./src/main_Z4_0.d \


# Each subdirectory must supply rules for building sources it contributes
src/MPC57xx__Interrupt_Init.o: ../src/MPC57xx__Interrupt_Init.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@src/MPC57xx__Interrupt_Init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/MPC57xx__Interrupt_Init.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Vector.o: ../src/Vector.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@src/Vector.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/Vector.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/intc_SW_mode_isr_vectors_MPC5748G.o: ../src/intc_SW_mode_isr_vectors_MPC5748G.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@src/intc_SW_mode_isr_vectors_MPC5748G.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/intc_SW_mode_isr_vectors_MPC5748G.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/intc_sw_handlers.o: ../src/intc_sw_handlers.S
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: Standard S32DS Assembler'
	powerpc-eabivle-gcc "@src/intc_sw_handlers.args" -c -o "src/intc_sw_handlers.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/main_Z4_0.o: ../src/main_Z4_0.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	powerpc-eabivle-gcc "@src/main_Z4_0.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "src/main_Z4_0.o" "$<"
	@echo 'Finished building: $<'
	@echo ' '


