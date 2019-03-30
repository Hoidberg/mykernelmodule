#!/bin/bash

make
sudo -s
insmod config.ko
tail /var/log/syslog
rmmod config.ko
exit
