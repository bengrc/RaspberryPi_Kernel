cmd_sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.ko sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.o sound/soc/bcm/snd-soc-hifiberry-dacplusdsp.mod.o ;  true
