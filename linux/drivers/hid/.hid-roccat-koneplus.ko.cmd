cmd_drivers/hid/hid-roccat-koneplus.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-roccat-koneplus.ko drivers/hid/hid-roccat-koneplus.o drivers/hid/hid-roccat-koneplus.mod.o ;  true
