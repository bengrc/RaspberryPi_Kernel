cmd_drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.ko drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.o drivers/gpu/drm/panel/panel-raspberrypi-touchscreen.mod.o ;  true
