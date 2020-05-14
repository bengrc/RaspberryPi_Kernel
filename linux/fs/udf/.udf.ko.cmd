cmd_fs/udf/udf.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o ;  true
