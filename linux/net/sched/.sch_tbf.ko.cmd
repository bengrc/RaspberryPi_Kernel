cmd_net/sched/sch_tbf.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sched/sch_tbf.ko net/sched/sch_tbf.o net/sched/sch_tbf.mod.o ;  true
