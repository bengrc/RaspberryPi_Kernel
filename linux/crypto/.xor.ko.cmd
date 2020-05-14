cmd_crypto/xor.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o ;  true
