# RaspberryPi_Kernel
A Rpi kernel for the embedded systems course.

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
