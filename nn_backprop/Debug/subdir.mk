################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../eigen_test.cpp \
../main_file.cpp \
../peripheral_functions.cpp 

OBJS += \
./eigen_test.o \
./main_file.o \
./peripheral_functions.o 

CPP_DEPS += \
./eigen_test.d \
./main_file.d \
./peripheral_functions.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/eigen3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


