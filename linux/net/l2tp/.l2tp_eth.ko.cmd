cmd_net/l2tp/l2tp_eth.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/l2tp/l2tp_eth.ko net/l2tp/l2tp_eth.o net/l2tp/l2tp_eth.mod.o ;  true
