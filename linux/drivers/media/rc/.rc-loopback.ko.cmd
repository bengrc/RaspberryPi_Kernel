cmd_drivers/media/rc/rc-loopback.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/rc/rc-loopback.ko drivers/media/rc/rc-loopback.o drivers/media/rc/rc-loopback.mod.o ;  true
