cmd_fs/dlm/dlm.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/dlm/dlm.ko fs/dlm/dlm.o fs/dlm/dlm.mod.o ;  true
