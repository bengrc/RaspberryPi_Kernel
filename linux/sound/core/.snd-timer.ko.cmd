cmd_sound/core/snd-timer.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/core/snd-timer.ko sound/core/snd-timer.o sound/core/snd-timer.mod.o ;  true
