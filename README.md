# EDK2 UEFI Firmware For Oneplus 8 Pro (instantnoodlep)

## Dependencies

For Ubuntu 20.04:

```bash
sudo apt update
sudo apt upgrade
sudo apt install build-essential uuid-dev iasl git nasm gcc-aarch64-linux-gnu abootimg python3-distutils python3-pil python3-git gettext p7zip-full
```

## Building

1.Clone this project 

```bash
git clone https://github.com/musabcel/edk2-instantnoodlep.git
cd edk2-instantnoodlep
7z x edk2.7z.001
cd ..
chmod -R 755 edk2-instantnoodlep/
cd edk2-instantnoodlep/sm8250
```

2.Build this project

```bash
bash build.sh
```

3.Boot the image

```bash
fastboot boot uefi.img
```


