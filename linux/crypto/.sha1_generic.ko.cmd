cmd_crypto/sha1_generic.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/sha1_generic.ko crypto/sha1_generic.o crypto/sha1_generic.mod.o ;  true
