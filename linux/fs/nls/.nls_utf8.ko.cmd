cmd_fs/nls/nls_utf8.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/nls/nls_utf8.ko fs/nls/nls_utf8.o fs/nls/nls_utf8.mod.o ;  true
