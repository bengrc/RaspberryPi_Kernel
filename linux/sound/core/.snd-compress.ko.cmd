cmd_sound/core/snd-compress.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o sound/core/snd-compress.ko sound/core/snd-compress.o sound/core/snd-compress.mod.o ;  true
