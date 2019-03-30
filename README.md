# mykernelmodule

## Info
A Simple Kernel Module For Linux

## How to install regularly
1. Execute install.sh by typing:
``` shell
git clone https://github.com/Hoidberg/mykernelmodule.git
cd mykernelmodule/
chmod 775 install.sh
./install.sh
```
2. Thats it

## How to install manually
1. Open the terminal and type:
```
git clone https://github.com/Hoidberg/mykernelmodule.git
```
2. When it is done installing type:
```shell
cd mykernelmodule/
```
3. Then type:
```shell
make
```
4. After that type:
```shell
sudo -s
```
5. Now type:
```shell
insmod config.ko
```
6. After that type:
```shell
tail /var/log/syslog
```
7. Now type:
```shell
rmmod config.ko
```
8. To exit type:
```shell
exit
```
