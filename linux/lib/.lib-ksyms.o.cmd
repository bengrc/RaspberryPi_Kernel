cmd_lib/lib-ksyms.o := arm-linux-gnueabihf-objdump -h lib/lib.a | sed -ne '/___ksymtab/s/.*+\([^ ]*\).*/EXTERN(\1)/p' >lib/.lib-ksyms.o.lds; rm -f lib/.lib_exports.o; echo | arm-linux-gnueabihf-gcc -Wp,-MD,lib/.lib-ksyms.o.d  -nostdinc -isystem /home/benjamin/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/4.9.3/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o lib/.lib_exports.o -x assembler -; arm-linux-gnueabihf-ld  -EL    -r -o lib/lib-ksyms.o -T lib/.lib-ksyms.o.lds lib/.lib_exports.o; rm lib/.lib_exports.o lib/.lib-ksyms.o.lds
