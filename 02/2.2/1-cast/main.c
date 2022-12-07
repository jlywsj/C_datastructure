#include <stdio.h>

// 强制类型转换
int main() {
    int i = 5;
    float f = i / 2; // 右操作数进行的是整型运算，因为两个操作数都是整型
    float k = (float) i / 2; //  表达式 (float)i：将i的值进行强制类型转换为float，并放回
    printf("%f\n",f);
    int v = 10;
    printf("%.1f%%\n",(float) v); // %% 表示输出一个%
    return 0;
}
