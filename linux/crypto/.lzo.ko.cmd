cmd_crypto/lzo.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/lzo.ko crypto/lzo.o crypto/lzo.mod.o ;  true
