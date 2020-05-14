# RaspberryPi_Kernel
A Rpi kernel for the embedded systems course.

Install dependencies needed to build the sources for cross-compilation :
sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev

Install toolchain to the home folder :
git clone https://github.com/raspberrypi/tools ~/tools

Updating the $PATH environment variable makes the system aware of file locations needed for cross-compilation.
echo PATH=\$PATH:~/tools/arm-bcm2708/arm-linux-gnueabihf/bin >> ~/.bashrc
source ~/.bashrc
