cmd_drivers/input/joystick/iforce/iforce.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/input/joystick/iforce/iforce.ko drivers/input/joystick/iforce/iforce.o drivers/input/joystick/iforce/iforce.mod.o ;  true
