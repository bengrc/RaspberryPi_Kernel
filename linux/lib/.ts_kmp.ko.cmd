cmd_lib/ts_kmp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/ts_kmp.ko lib/ts_kmp.o lib/ts_kmp.mod.o ;  true
