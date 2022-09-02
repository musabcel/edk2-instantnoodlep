#!/bin/bash
# based on the instructions from edk2-platform
set -e
. build_common.sh
# not actually GCC5; it's GCC7 on Ubuntu 18.04.
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -p F11/F11.dsc
gzip -c < Build/instantnoodlep/DEBUG_GCC5/FV/F11_UEFI.fd >uefi.img
cat instantnoodlep.dtb >>uefi.img
abootimg --create boot_uefi.img -k uefi.img -r androidboot/ramdisk -f androidboot/android.cfg

