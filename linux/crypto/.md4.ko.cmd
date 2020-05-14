cmd_crypto/md4.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/md4.ko crypto/md4.o crypto/md4.mod.o ;  true
