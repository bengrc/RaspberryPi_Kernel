cmd_drivers/hid/hid-roccat-pyra.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-roccat-pyra.ko drivers/hid/hid-roccat-pyra.o drivers/hid/hid-roccat-pyra.mod.o ;  true
