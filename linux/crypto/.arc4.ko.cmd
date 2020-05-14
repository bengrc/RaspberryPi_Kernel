cmd_crypto/arc4.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/arc4.ko crypto/arc4.o crypto/arc4.mod.o ;  true
