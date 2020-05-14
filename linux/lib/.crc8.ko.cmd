cmd_lib/crc8.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o ;  true
