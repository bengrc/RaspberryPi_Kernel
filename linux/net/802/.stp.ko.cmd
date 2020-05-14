cmd_net/802/stp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o ;  true
