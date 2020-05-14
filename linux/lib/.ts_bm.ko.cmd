cmd_lib/ts_bm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o ;  true
