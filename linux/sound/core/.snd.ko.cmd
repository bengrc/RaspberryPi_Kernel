cmd_sound/core/snd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o ;  true
