cmd_drivers/hid/hid-xinmo.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-xinmo.ko drivers/hid/hid-xinmo.o drivers/hid/hid-xinmo.mod.o ;  true
