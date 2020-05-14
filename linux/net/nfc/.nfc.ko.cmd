cmd_net/nfc/nfc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o ;  true
