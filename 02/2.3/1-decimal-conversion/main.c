#include <stdio.h>

int main() {
    int i = 123;
    int eight_ = 0173; // ���ð˽��Ƹ�ֵǰ��+0
    int sixteen = 0x7b;  // ����ʮ�����Ƹ�ֵǰ��+0x
    printf("%d\n",i); // ������
    printf("%o\n",i); // �˽���
    printf("%x\n",i); // ʮ������
    return 0;
}
