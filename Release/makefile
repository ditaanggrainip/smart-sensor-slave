################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
smartsensor.lss \

FLASH_IMAGE += \
smartsensor.hex \

EEPROM_IMAGE += \
smartsensor.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: smartsensor.elf secondary-outputs

# Tool invocations
smartsensor.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,smartsensor.map -mmcu=atmega2560 -o "smartsensor.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

smartsensor.lss: smartsensor.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S smartsensor.elf  >"smartsensor.lss"
	@echo 'Finished building: $@'
	@echo ' '

smartsensor.hex: smartsensor.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex smartsensor.elf  "smartsensor.hex"
	@echo 'Finished building: $@'
	@echo ' '

smartsensor.eep: smartsensor.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex smartsensor.elf  "smartsensor.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: smartsensor.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=berkeley -t smartsensor.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) smartsensor.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
