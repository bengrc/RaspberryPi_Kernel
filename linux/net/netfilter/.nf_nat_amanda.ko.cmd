cmd_net/netfilter/nf_nat_amanda.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nf_nat_amanda.ko net/netfilter/nf_nat_amanda.o net/netfilter/nf_nat_amanda.mod.o ;  true
