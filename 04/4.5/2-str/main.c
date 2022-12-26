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
    // ���s1 �� s2 û������������ 0
    while (s1[i] && s2[i]) {
        // ���s1�ĵ�i���ַ�����ֵ����s2�ĵ�i����ֵ������1
        if (s1[i] > s2[i]) {
            return 1;
        }
        // ���s1�ĵ�i���ַ�����ֵС��s2�ĵ�i����ֵ������-1
        if (s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }

    // ���s1��s2ͬʱ������ɣ�����0��ʾ���ַ������
    if (!s1[i] && !s2[i]) {
        return 0;
    } else {
        // ���s1�ȱ�����ɷ���-1С�������ʾs2�ȱ�����ɷ���1��
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
//    len = strlen(a); // strlenͳ���ַ������ȣ�������\0��������
    len = my_strlen(a);
    printf("len=%d\n", len);

    // strcat���ڶ�������׷�ӵ���һ����������Ҫ��֤��һ��������С�㹻�����������ᱨ��
    strcat(b, c);
    puts(b);

    // strcpy���ڶ���������������һ����������Ҫ��֤��һ��������С�㹻�����ܲ��ᱨ��
    strcpy(a, c);
    puts(a);

    // strcmp �Ƚ������ַ����Ƿ���ͬ������int���ͣ���ͬΪ 0����СΪ -1���ϴ�Ϊ 1
    // ԭ���Ǵ�ͷ��ʼ���αȽ� ASCII��ֵ�Ĵ�С
    printf("a, b = %d\n", strcmp(a, b));
    printf("a, c = %d\n", strcmp(a, c));


    char *str = "Hello, everybody!" + 12;  // �ַ�������+��ֵ����ʾ����ֵ������ʼ

    printf("%s",str);

    return 0;
}
