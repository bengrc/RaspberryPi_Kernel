cmd_drivers/usb/gadget/function/u_serial.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/usb/gadget/function/u_serial.ko drivers/usb/gadget/function/u_serial.o drivers/usb/gadget/function/u_serial.mod.o ;  true
