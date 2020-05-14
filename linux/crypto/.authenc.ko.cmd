cmd_crypto/authenc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o ;  true
