cmd_crypto/gf128mul.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o ;  true
