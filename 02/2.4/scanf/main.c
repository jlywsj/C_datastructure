#include <stdio.h>

int main() {
    int i;  // 在定义变量的时候，如果没有初始化，断点调试不会卡在这一句，但是编译器已经分好地址
    char c;
    scanf("%d",&i);
    printf("i = %d\n",i);
//    fflush(stdin); // flush 清空标准输入缓冲区
    scanf(" %c",&c);
    printf("c = %c\n",c);
    return 0;
}