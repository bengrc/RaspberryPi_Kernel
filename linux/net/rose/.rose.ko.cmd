cmd_net/rose/rose.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o ;  true
