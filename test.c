/*************************************************************************
    > File Name: zlog.c
    > Author: zjn 该函数用于测试zlog是否安装成功
    > Mail:zjn 
    > Created Time: 2020年05月19日 星期二 16时34分35秒
 ************************************************************************/

#include<stdio.h>
#include "test.h"

int main(int argc,char **argv)
{
	int rc;
	zlog_category_t *zc;
	rc = dzlog_init("my_log.conf","my_log");
	if(rc){
		printf("dzlog init is error\n");
	}
	dzlog_info("hello,zlog");
	
	zc = zlog_get_category("my_log");
	zlog_trace(zc,"hello,zlog - trace");
	zlog_debug(zc,"hello,zlog -debug");
	zlog_error(zc,"hello,zlog -error");
	zlog_fini();
	return 0;
}
