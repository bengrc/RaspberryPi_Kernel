cmd_net/ipv4/ah4.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv4/ah4.ko net/ipv4/ah4.o net/ipv4/ah4.mod.o ;  true
