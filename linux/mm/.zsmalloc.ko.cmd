cmd_mm/zsmalloc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o mm/zsmalloc.ko mm/zsmalloc.o mm/zsmalloc.mod.o ;  true
