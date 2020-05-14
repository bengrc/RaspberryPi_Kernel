cmd_net/9p/9pnet.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/9p/9pnet.ko net/9p/9pnet.o net/9p/9pnet.mod.o ;  true
