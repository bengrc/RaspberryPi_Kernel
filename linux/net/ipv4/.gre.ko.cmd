cmd_net/ipv4/gre.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o ;  true
