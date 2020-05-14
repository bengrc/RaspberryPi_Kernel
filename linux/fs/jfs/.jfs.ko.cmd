cmd_fs/jfs/jfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o ;  true
