#include <stdio.h>

int main() {
    // �ַ�����������ڶ����ʱ����{}���г�ʼ�����������\0��Ϊ�����������򲻻��Զ���ӽ�����
    char arr[] = {65,66,67,68,0};
    // ���ʹ���ַ���������ֵ����Ҫ
    char arr2[] = "abcd";
    printf("%s\n",arr);
    printf("%s\n",arr2);
    return 0;
}
