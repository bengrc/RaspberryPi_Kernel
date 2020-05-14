cmd_crypto/af_alg.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/af_alg.ko crypto/af_alg.o crypto/af_alg.mod.o ;  true
