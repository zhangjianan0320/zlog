#########################################################################
# File Name: zlog_build.sh
# Author: zjn
# mail: zjn
# Created Time: 2020年05月19日 星期二 17时36分07秒
#########################################################################
#!/bin/bash
echo start install zlog

git clone https://github.com/HardySimpson/zlog.git
cd zlog
make
sudo make install
sudo ldconfig

