cmd_fs/hfs/hfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o ;  true
