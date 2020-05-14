cmd_crypto/gcm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/gcm.ko crypto/gcm.o crypto/gcm.mod.o ;  true
