cmd_fs/fuse/cuse.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/fuse/cuse.ko fs/fuse/cuse.o fs/fuse/cuse.mod.o ;  true
