cmd_drivers/iio/humidity/hdc100x.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/iio/humidity/hdc100x.ko drivers/iio/humidity/hdc100x.o drivers/iio/humidity/hdc100x.mod.o ;  true
