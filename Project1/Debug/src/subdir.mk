################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Project1.c \
../src/read_command.c \
../src/shell.c \
../src/type_prompt.c 

OBJS += \
./src/Project1.o \
./src/read_command.o \
./src/shell.o \
./src/type_prompt.o 

C_DEPS += \
./src/Project1.d \
./src/read_command.d \
./src/shell.d \
./src/type_prompt.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


