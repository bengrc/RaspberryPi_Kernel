cmd_sound/soc/bcm/snd-soc-rpi-proto.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/soc/bcm/snd-soc-rpi-proto.ko sound/soc/bcm/snd-soc-rpi-proto.o sound/soc/bcm/snd-soc-rpi-proto.mod.o ;  true
