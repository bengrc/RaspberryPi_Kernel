cmd_net/netfilter/nf_nat_tftp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/nf_nat_tftp.ko net/netfilter/nf_nat_tftp.o net/netfilter/nf_nat_tftp.mod.o ;  true
