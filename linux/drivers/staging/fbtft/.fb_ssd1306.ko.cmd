cmd_drivers/staging/fbtft/fb_ssd1306.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/staging/fbtft/fb_ssd1306.ko drivers/staging/fbtft/fb_ssd1306.o drivers/staging/fbtft/fb_ssd1306.mod.o ;  true
