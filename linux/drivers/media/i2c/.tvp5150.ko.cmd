cmd_drivers/media/i2c/tvp5150.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/i2c/tvp5150.ko drivers/media/i2c/tvp5150.o drivers/media/i2c/tvp5150.mod.o ;  true
