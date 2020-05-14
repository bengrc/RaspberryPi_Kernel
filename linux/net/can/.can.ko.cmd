cmd_net/can/can.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/can/can.ko net/can/can.o net/can/can.mod.o ;  true
