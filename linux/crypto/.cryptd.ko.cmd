cmd_crypto/cryptd.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/cryptd.ko crypto/cryptd.o crypto/cryptd.mod.o ;  true
