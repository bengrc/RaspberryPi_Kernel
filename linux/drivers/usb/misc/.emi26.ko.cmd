cmd_drivers/usb/misc/emi26.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/misc/emi26.ko drivers/usb/misc/emi26.o drivers/usb/misc/emi26.mod.o ;  true
