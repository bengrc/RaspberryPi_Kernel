cmd_drivers/media/usb/pwc/pwc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/media/usb/pwc/pwc.ko drivers/media/usb/pwc/pwc.o drivers/media/usb/pwc/pwc.mod.o ;  true
