cmd_drivers/hid/hid-kensington.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/hid/hid-kensington.ko drivers/hid/hid-kensington.o drivers/hid/hid-kensington.mod.o ;  true
