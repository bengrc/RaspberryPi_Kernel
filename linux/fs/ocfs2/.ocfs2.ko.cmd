cmd_fs/ocfs2/ocfs2.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/ocfs2/ocfs2.ko fs/ocfs2/ocfs2.o fs/ocfs2/ocfs2.mod.o ;  true
