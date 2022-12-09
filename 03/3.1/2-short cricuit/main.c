#include <stdio.h>


// 逻辑与 和 逻辑或 短路运算
int main() {
    int i = 0;
    // 如果 i 为假时，不会执行&&后面的运算
    i&&printf("you can't see me\n");

    // 等同于下一步代码
    if(i){
        printf("you can't see me\n");
    }

    // 如果 i为真 不执行后面代码
    i || printf("you can't see me\n");


    return 0;
}
