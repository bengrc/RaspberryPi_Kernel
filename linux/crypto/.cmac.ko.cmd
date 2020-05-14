cmd_crypto/cmac.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o ;  true
