#include <stdio.h>

// ǿ������ת��
int main() {
    int i = 5;
    float f = i / 2; // �Ҳ��������е����������㣬��Ϊ������������������
    float k = (float) i / 2; //  ���ʽ (float)i����i��ֵ����ǿ������ת��Ϊfloat�����Ż�
    printf("%f\n",f);
    int v = 10;
    printf("%.1f%%\n",(float) v); // %% ��ʾ���һ��%
    return 0;
}
