cmd_drivers/auxdisplay/charlcd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/auxdisplay/charlcd.ko drivers/auxdisplay/charlcd.o drivers/auxdisplay/charlcd.mod.o ;  true
