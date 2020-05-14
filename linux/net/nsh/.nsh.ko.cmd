cmd_net/nsh/nsh.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/nsh/nsh.ko net/nsh/nsh.o net/nsh/nsh.mod.o ;  true
