cmd_drivers/usb/gadget/legacy/g_ether.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/legacy/g_ether.ko drivers/usb/gadget/legacy/g_ether.o drivers/usb/gadget/legacy/g_ether.mod.o ;  true
