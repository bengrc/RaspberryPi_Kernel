cmd_net/ipv6/xfrm6_tunnel.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/ipv6/xfrm6_tunnel.ko net/ipv6/xfrm6_tunnel.o net/ipv6/xfrm6_tunnel.mod.o ;  true
