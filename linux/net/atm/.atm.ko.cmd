cmd_net/atm/atm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o ;  true
