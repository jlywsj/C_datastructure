#include <stdio.h>

int main() {
    char c = 'A'; // A: 65, a: 97
    printf("c: %c\n",c);
    printf("c = %d\n",c);

    printf("c+32: %c\n",c+32); // ���ַ���ʽ���
    printf("c+32 = %d\n",c+32); // ����ֵ��ʽ���

    char ch = '0';
    char ch2 = '1';

    printf("ch: %c\n",ch); // ���ַ���ʽ����ַ�0
    printf("ch'- '0' = %d\n",ch-'0'); // �ַ�0 - �ַ�0 = 0��������ֵ�������0

    printf("ch2: %c\n",ch2);
    printf("ch2 - '0' = %d\n",ch2 - '0');

    return 0;
}
