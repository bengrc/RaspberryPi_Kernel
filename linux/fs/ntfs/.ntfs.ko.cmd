cmd_fs/ntfs/ntfs.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/ntfs/ntfs.ko fs/ntfs/ntfs.o fs/ntfs/ntfs.mod.o ;  true
