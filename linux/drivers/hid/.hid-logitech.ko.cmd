cmd_drivers/hid/hid-logitech.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-logitech.ko drivers/hid/hid-logitech.o drivers/hid/hid-logitech.mod.o ;  true
