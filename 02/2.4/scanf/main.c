#include <stdio.h>

int main() {
    int i;  // �ڶ��������ʱ�����û�г�ʼ�����ϵ���Բ��Ῠ����һ�䣬���Ǳ������Ѿ��ֺõ�ַ
    char c;
    scanf("%d",&i);
    printf("i = %d\n",i);
//    fflush(stdin); // flush ��ձ�׼���뻺����
    scanf(" %c",&c);
    printf("c = %c\n",c);
    return 0;
}