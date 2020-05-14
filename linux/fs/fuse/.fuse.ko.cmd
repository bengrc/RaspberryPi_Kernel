cmd_fs/fuse/fuse.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/fuse/fuse.ko fs/fuse/fuse.o fs/fuse/fuse.mod.o ;  true
