cmd_drivers/net/usb/kaweth.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/net/usb/kaweth.ko drivers/net/usb/kaweth.o drivers/net/usb/kaweth.mod.o ;  true
