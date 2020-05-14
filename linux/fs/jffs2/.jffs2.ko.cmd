cmd_fs/jffs2/jffs2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/jffs2/jffs2.ko fs/jffs2/jffs2.o fs/jffs2/jffs2.mod.o ;  true
