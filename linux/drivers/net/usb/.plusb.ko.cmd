cmd_drivers/net/usb/plusb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/usb/plusb.ko drivers/net/usb/plusb.o drivers/net/usb/plusb.mod.o ;  true
