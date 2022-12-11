#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main() {
    int size; // size 表示申请多大内存的空间
    char *p; // void类型的指针是不能进行偏移的，因此不会定义void类型的指针
    scanf("%d",&size);
    // malloc 返回的是void *代表无类型指针
    p = malloc(size);

    strcpy(p,"malloc success");

    free(p); // 释放申请空间时，给的地址必须是最初malloc返回的地址。
    return 0;
}
