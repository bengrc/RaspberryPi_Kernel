cmd_drivers/hid/hid-holtek-kbd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-holtek-kbd.ko drivers/hid/hid-holtek-kbd.o drivers/hid/hid-holtek-kbd.mod.o ;  true
