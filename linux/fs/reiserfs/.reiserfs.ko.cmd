cmd_fs/reiserfs/reiserfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/reiserfs/reiserfs.ko fs/reiserfs/reiserfs.o fs/reiserfs/reiserfs.mod.o ;  true
