cmd_fs/xfs/xfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/xfs/xfs.ko fs/xfs/xfs.o fs/xfs/xfs.mod.o ;  true
