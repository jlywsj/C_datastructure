#include <stdio.h>

int main() {
    int i = 100;
    float f = 98.3;
    printf("Number=%4d, Score=%5.2f\n",i,f);
    i = 1001;
    f = 92.6;
    // %nd表示占n个字符位置，如果不够则用空格补齐，-表示左对齐默认右对齐
    // %5.2f表示占5个字符位置，2位小数 四舍五入
    // 如果占位符小于应该的位置时，不会影响
    // 如果浮点数没有指定小数点后的位数，会按正常输出
    printf("Number=%4d, Score=%5.2f\n",i,f);
    return 0;
}
