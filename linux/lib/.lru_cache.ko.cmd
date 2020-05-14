cmd_lib/lru_cache.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/lru_cache.ko lib/lru_cache.o lib/lru_cache.mod.o ;  true
