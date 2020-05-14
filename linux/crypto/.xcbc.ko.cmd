cmd_crypto/xcbc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o ;  true
