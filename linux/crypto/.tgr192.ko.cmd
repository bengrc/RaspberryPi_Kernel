cmd_crypto/tgr192.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/tgr192.ko crypto/tgr192.o crypto/tgr192.mod.o ;  true
