cmd_net/ipv6/netfilter/nf_socket_ipv6.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/netfilter/nf_socket_ipv6.ko net/ipv6/netfilter/nf_socket_ipv6.o net/ipv6/netfilter/nf_socket_ipv6.mod.o ;  true
