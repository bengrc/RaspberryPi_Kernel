cmd_drivers/bluetooth/btrtl.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/bluetooth/btrtl.ko drivers/bluetooth/btrtl.o drivers/bluetooth/btrtl.mod.o ;  true
