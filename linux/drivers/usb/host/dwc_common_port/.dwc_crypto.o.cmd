cmd_drivers/usb/host/dwc_common_port/dwc_crypto.o := arm-linux-gnueabihf-gcc -Wp,-MD,drivers/usb/host/dwc_common_port/.dwc_crypto.o.d  -nostdinc -isystem /home/benjamin/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/4.9.3/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DDWC_LINUX -DDWC_LIBMODULE -DDWC_CCLIB -DDWC_NOTIFYLIB -DDWC_UTFLIB    -DKBUILD_BASENAME='"dwc_crypto"' -DKBUILD_MODNAME='"dwc_common_port_lib"' -c -o drivers/usb/host/dwc_common_port/.tmp_dwc_crypto.o drivers/usb/host/dwc_common_port/dwc_crypto.c

source_drivers/usb/host/dwc_common_port/dwc_crypto.o := drivers/usb/host/dwc_common_port/dwc_crypto.c

deps_drivers/usb/host/dwc_common_port/dwc_crypto.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

drivers/usb/host/dwc_common_port/dwc_crypto.o: $(deps_drivers/usb/host/dwc_common_port/dwc_crypto.o)

$(deps_drivers/usb/host/dwc_common_port/dwc_crypto.o):
