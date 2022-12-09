#include <stdio.h>

int main() {
    int i = 123;
    int eight_ = 0173; // 采用八进制赋值前面+0
    int sixteen = 0x7b;  // 采用十六进制赋值前面+0x
    printf("%d\n",i); // 二进制
    printf("%o\n",i); // 八进制
    printf("%x\n",i); // 十六进制
    return 0;
}
