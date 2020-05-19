#使用变量代替比较长的编译工具名
CC=gcc
#使用变量代替较多的参数
CFLASS_WARN = -Wall -c
OBJECT = edit
#$@表示目标文件的完整名称
$(OBJECT):test.o
	$(CC) test.o -lzlog  -o $@ 	
test.o:test.c
	$(CC) $(CFLASS_WARN) test.c -o$@

clean:
	rm *.o edit


