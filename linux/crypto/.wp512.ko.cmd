cmd_crypto/wp512.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/wp512.ko crypto/wp512.o crypto/wp512.mod.o ;  true
