cmd_fs/gfs2/gfs2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/gfs2/gfs2.ko fs/gfs2/gfs2.o fs/gfs2/gfs2.mod.o ;  true
