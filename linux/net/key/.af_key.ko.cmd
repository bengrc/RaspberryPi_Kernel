cmd_net/key/af_key.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o ;  true
