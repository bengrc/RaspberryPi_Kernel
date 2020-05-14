cmd_net/802/p8022.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/802/p8022.ko net/802/p8022.o net/802/p8022.mod.o ;  true
