#include <stdio.h>

int main() {
    // 字符串数组如果在定义的时候用{}进行初始化，必须加上\0作为结束符，否则不会自动添加结束符
    char arr[] = {65,66,67,68,0};
    // 如果使用字符串常量赋值则不需要
    char arr2[] = "abcd";
    printf("%s\n",arr);
    printf("%s\n",arr2);
    return 0;
}
