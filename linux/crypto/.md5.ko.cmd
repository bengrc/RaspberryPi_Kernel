cmd_crypto/md5.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/md5.ko crypto/md5.o crypto/md5.mod.o ;  true
