cmd_net/802/psnap.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o ;  true
