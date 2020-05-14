cmd_net/802/garp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o ;  true
