cmd_net/can/can-gw.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/can/can-gw.ko net/can/can-gw.o net/can/can-gw.mod.o ;  true
