#include <stdio.h>
/*
 * 符号常量：define定义的符号常量，是在使用的位置直接替换的，
 * 使用时如果符号常量为表达式时，需要注意这一点
 * */

#define P 3+2
int main() {
    int i = P * 2;  // i = 3 + 2 * 2
    printf("i = %d\n",i);
    return 0;
}
