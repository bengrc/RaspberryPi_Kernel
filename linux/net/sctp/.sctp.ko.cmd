cmd_net/sctp/sctp.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o net/sctp/sctp.ko net/sctp/sctp.o net/sctp/sctp.mod.o ;  true
