cmd_arch/arm/crypto/aes-cipher-core.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.aes-cipher-core.o.d  -nostdinc -isystem /home/benjamin/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/4.9.3/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -DMODULE  -c -o arch/arm/crypto/aes-cipher-core.o arch/arm/crypto/aes-cipher-core.S

source_arch/arm/crypto/aes-cipher-core.o := arch/arm/crypto/aes-cipher-core.S

deps_arch/arm/crypto/aes-cipher-core.o := \
    $(wildcard include/config/cpu/big/endian.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \
  arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \

arch/arm/crypto/aes-cipher-core.o: $(deps_arch/arm/crypto/aes-cipher-core.o)

$(deps_arch/arm/crypto/aes-cipher-core.o):
