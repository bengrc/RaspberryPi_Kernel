cmd_net/ipv6/sit.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/sit.ko net/ipv6/sit.o net/ipv6/sit.mod.o ;  true
