cmd_drivers/net/usb/smsc75xx.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/usb/smsc75xx.ko drivers/net/usb/smsc75xx.o drivers/net/usb/smsc75xx.mod.o ;  true
