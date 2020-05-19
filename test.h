#ifndef TEST_H
#define TEST_H
#include "zlog.h"
//自定义的打印级别 需要在my_log.conf 中也定义才能生效
enum {
    ZLOG_LEVEL_TRACE = 30, 
    /* must equals conf file setting */
};

#define zlog_trace(cat, format, args...) \
    zlog(cat, __FILE__, sizeof(__FILE__)-1, __func__, sizeof(__func__)-1, __LINE__, \
    ZLOG_LEVEL_TRACE, format, ##args)

#endif
