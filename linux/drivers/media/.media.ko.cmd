cmd_drivers/media/media.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/media.ko drivers/media/media.o drivers/media/media.mod.o ;  true
