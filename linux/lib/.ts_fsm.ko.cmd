cmd_lib/ts_fsm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o lib/ts_fsm.ko lib/ts_fsm.o lib/ts_fsm.mod.o ;  true
