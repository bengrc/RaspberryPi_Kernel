cmd_drivers/media/rc/ati_remote.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/rc/ati_remote.ko drivers/media/rc/ati_remote.o drivers/media/rc/ati_remote.mod.o ;  true
