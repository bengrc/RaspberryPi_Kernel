cmd_lib/crc7.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o ;  true
