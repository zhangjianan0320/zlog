#ifndef TEST_H
#define TEST_H
#include "zlog.h"
//�Զ���Ĵ�ӡ���� ��Ҫ��my_log.conf ��Ҳ���������Ч
enum {
    ZLOG_LEVEL_TRACE = 30, 
    /* must equals conf file setting */
};

#define zlog_trace(cat, format, args...) \
    zlog(cat, __FILE__, sizeof(__FILE__)-1, __func__, sizeof(__func__)-1, __LINE__, \
    ZLOG_LEVEL_TRACE, format, ##args)

#endif
