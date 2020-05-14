cmd_crypto/deflate.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/deflate.ko crypto/deflate.o crypto/deflate.mod.o ;  true
