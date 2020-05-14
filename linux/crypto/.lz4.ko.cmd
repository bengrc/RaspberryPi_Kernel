cmd_crypto/lz4.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/lz4.ko crypto/lz4.o crypto/lz4.mod.o ;  true
