cmd_fs/9p/9p.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/9p/9p.ko fs/9p/9p.o fs/9p/9p.mod.o ;  true
