cmd_drivers/bluetooth/btbcm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/bluetooth/btbcm.ko drivers/bluetooth/btbcm.o drivers/bluetooth/btbcm.mod.o ;  true
