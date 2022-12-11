#include <stdio.h>

int main() {
    char str[10];
    // scanf读取字符串操作会自动往字符数组中放结束符
    scanf("%s",str);
    printf("%s",str);

    return 0;
}
