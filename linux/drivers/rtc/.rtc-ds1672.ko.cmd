cmd_drivers/rtc/rtc-ds1672.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/rtc/rtc-ds1672.ko drivers/rtc/rtc-ds1672.o drivers/rtc/rtc-ds1672.mod.o ;  true
