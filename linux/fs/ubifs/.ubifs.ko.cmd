cmd_fs/ubifs/ubifs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/ubifs/ubifs.ko fs/ubifs/ubifs.o fs/ubifs/ubifs.mod.o ;  true
