cmd_lib/crc-ccitt.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/crc-ccitt.ko lib/crc-ccitt.o lib/crc-ccitt.mod.o ;  true
