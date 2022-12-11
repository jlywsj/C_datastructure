#include <stdio.h>
#include "string.h"

int my_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

int my_strcmp(char *s1, char *s2) {
    int i;
    // 如果s1 和 s2 没有遇到结束符 0
    while (s1[i] && s2[i]) {
        // 如果s1的第i个字符的码值大于s2的第i个码值，返回1
        if (s1[i] > s2[i]) {
            return 1;
        }
        // 如果s1的第i个字符的码值小于s2的第i个码值，返回-1
        if (s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }

    // 如果s1和s2同时遍历完成，返回0表示两字符串相等
    if (!s1[i] && !s2[i]) {
        return 0;
    } else {
        // 如果s1先遍历完成返回-1小，否则表示s2先遍历完成返回1大
        return s1[i] ? -1 : 1;
    }
}

int main() {
    char a[100];
    char b[20] = "hello";
    char c[100] = " world";
    char d[100] = "!!!";
    int len;
    gets(a);
    puts(a);
//    len = strlen(a); // strlen统计字符串长度，结束符\0不算在内
    len = my_strlen(a);
    printf("len=%d\n", len);

    // strcat将第二个参数追加到第一个参数，需要保证第一个参数大小足够，尽管它不会报错
    strcat(b, c);
    puts(b);

    // strcpy将第二个参数拷贝到第一个参数，需要保证第一个参数大小足够，尽管不会报错
    strcpy(a, c);
    puts(a);

    // strcmp 比较两个字符串是否相同，返回int类型，相同为 0，较小为 -1，较大为 1
    // 原则是从头开始依次比较 ASCII码值的大小
    printf("a, b = %d\n", strcmp(a, b));
    printf("a, c = %d\n", strcmp(a, c));


    char *str = "Hello, everybody!" + 12;  // 字符串常量+数值，表示从数值索引开始

    printf("%s",str);

    return 0;
}
