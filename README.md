### RaspberryPi kernel
A Rpi kernel for the embedded systems course done with a Ubuntu 20.04 LTS virtual machine and a Raspberry Pi 4B.

**Install required dependencies**

  - Install dependencies needed to build the sources for cross-compilation
```sh
$ sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev
```
**Install toolchain**

  - Download the toolchain using the Raspberry Pi official github repository
```sh
$ git clone https://github.com/raspberrypi/tools ~/tools
```

  - Update the $PATH environment variable to allow the system to find binaries needed for cross-compilation
```sh
$ echo PATH=\$PATH:~/tools/arm-bcm2708/arm-linux-gnueabihf/bin >> ~/.bashrc
$ source ~/.bashrc
```

**Get sources**

  - Download the minimal source tree from the Raspberry Pi official github repository
```sh
$ git clone --depth=1 https://github.com/raspberrypi/linux
```

**Build sources**

```sh
$ cd linux
```
  - For Pi 1, Pi Zero, Pi Zero W, or Compute Module
```sh
$ KERNEL=kernel
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcmrpi_defconfig
```
  - For Pi 2, Pi 3, Pi 3+, or Compute Module 3
```sh
$ KERNEL=kernel7
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcm2709_defconfig
```
  - For Raspberry Pi 4
```sh
$ KERNEL=kernel7l
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcm2711_defconfig
```
- Then, for all
```sh
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- zImage modules dtbs
```

**Install into SD Card**

For a NOOBS sd card (like i have), sdb6 is the FAT (boot) partition, and sdb7 is the ext4 filesystem (root) partition.

  - Mount these first, adjusting the partition numbers (for NOOBS cards):
```sh
$ mkdir mnt
$ mkdir mnt/fat32
$ mkdir mnt/ext4
$ sudo mount /dev/sdb6 mnt/fat32
$ sudo mount /dev/sdb7 mnt/ext4
```

  - Backup the old kernel (in case of a bad scenrario)
```sh
$ sudo cp mnt/fat32/kernel.img mnt/fat32/kernel-backup.img
```

  - Copy the kernel and device tree blobs into the SD card:
```sh
$ sudo cp arch/arm/boot/zImage mnt/fat32/$KERNEL.img
$ sudo cp arch/arm/boot/dts/*.dtb mnt/fat32/
$ sudo cp arch/arm/boot/dts/overlays/*.dtb* mnt/fat32/overlays/
$ sudo cp arch/arm/boot/dts/overlays/README mnt/fat32/overlays/
$ sudo umount mnt/fat32
$ sudo umount mnt/ext4
```

Now, you can plug the sd card into the Raspberry Pi and enjoy your new kernel :)


Thanks to https://www.raspberrypi.org/documentation/linux/kernel/building.md for the help.


Benjamin Gracia
(benjamin.gracia@epitech.eu)
