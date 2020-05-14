cmd_net/llc/llc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o ;  true
