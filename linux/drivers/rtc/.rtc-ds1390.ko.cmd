cmd_drivers/rtc/rtc-ds1390.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/rtc/rtc-ds1390.ko drivers/rtc/rtc-ds1390.o drivers/rtc/rtc-ds1390.mod.o ;  true
