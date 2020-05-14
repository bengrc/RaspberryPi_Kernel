cmd_net/ipv6/ah6.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/ah6.ko net/ipv6/ah6.o net/ipv6/ah6.mod.o ;  true
