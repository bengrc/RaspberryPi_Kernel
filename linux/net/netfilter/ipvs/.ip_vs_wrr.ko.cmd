cmd_net/netfilter/ipvs/ip_vs_wrr.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/netfilter/ipvs/ip_vs_wrr.ko net/netfilter/ipvs/ip_vs_wrr.o net/netfilter/ipvs/ip_vs_wrr.mod.o ;  true
