# RaspberryPi_Kernel
A Rpi kernel for the embedded systems course done with a Ubuntu 20.04 LTS virtual machine.

### Install required dependencies

Install dependencies needed to build the sources for cross-compilation
```sh
$ sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev
```
### Install toolchain

Install toolchain to the home folder :
```sh
$ git clone https://github.com/raspberrypi/tools ~/tools
```

Updating the $PATH environment variable makes the system aware of file locations needed for cross-compilation.
```sh
$ echo PATH=\$PATH:~/tools/arm-bcm2708/arm-linux-gnueabihf/bin >> ~/.bashrc
$ source ~/.bashrc
```

### Get sources

```sh
$ git clone --depth=1 https://github.com/raspberrypi/linux
```

### Build sources

```sh
$ cd linux
```
For Pi 1, Pi Zero, Pi Zero W, or Compute Module:
```sh
$ KERNEL=kernel
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcmrpi_defconfig
```
For Pi 2, Pi 3, Pi 3+, or Compute Module 3:
```sh
$ KERNEL=kernel7
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcm2709_defconfig
```
For Raspberry Pi 4:
```sh
$ KERNEL=kernel7l
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- bcm2711_defconfig
```
Then, for all:
```sh
$ make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- zImage modules dtbs
```

### Install into SD Card

I have a NOOBS sd card so sdb6 is the FAT (boot) partition, and sdb7 is the ext4 filesystem (root) partition.

Mount these first, adjusting the partition numbers for NOOBS cards (as necessary):
```sh
$ mkdir mnt
$ mkdir mnt/fat32
$ mkdir mnt/ext4
$ sudo mount /dev/sdb6 mnt/fat32
$ sudo mount /dev/sdb7 mnt/ext4
```

Backup the old kernel:
```sh
$ sudo cp mnt/fat32/kernel.img mnt/fat32/kernel-backup.img
```

Copy the kernel and device tree blobs into the SD card:
```sh
$ sudo cp arch/arm/boot/zImage mnt/fat32/$KERNEL.img
$ sudo cp arch/arm/boot/dts/*.dtb mnt/fat32/
$ sudo cp arch/arm/boot/dts/overlays/*.dtb* mnt/fat32/overlays/
$ sudo cp arch/arm/boot/dts/overlays/README mnt/fat32/overlays/
$ sudo umount mnt/fat32
$ sudo umount mnt/ext4
```

Now, you can enjoy your new kernel on the your RaspberryPi
