#include <stdio.h>


// �߼��� �� �߼��� ��·����
int main() {
    int i = 0;
    // ��� i Ϊ��ʱ������ִ��&&���������
    i&&printf("you can't see me\n");

    // ��ͬ����һ������
    if(i){
        printf("you can't see me\n");
    }

    // ��� iΪ�� ��ִ�к������
    i || printf("you can't see me\n");


    return 0;
}
