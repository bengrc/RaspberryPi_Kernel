cmd_crypto/ccm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o ;  true
