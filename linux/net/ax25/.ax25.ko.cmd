cmd_net/ax25/ax25.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ax25/ax25.ko net/ax25/ax25.o net/ax25/ax25.mod.o ;  true
