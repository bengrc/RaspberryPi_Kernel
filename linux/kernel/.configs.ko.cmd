cmd_kernel/configs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o ;  true
