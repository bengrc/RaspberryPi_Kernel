cmd_lib/xxhash.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/xxhash.ko lib/xxhash.o lib/xxhash.mod.o ;  true
