#include <stdio.h>
#include "stdlib.h"
#include "string.h"

int main() {
    int size; // size ��ʾ�������ڴ�Ŀռ�
    char *p; // void���͵�ָ���ǲ��ܽ���ƫ�Ƶģ���˲��ᶨ��void���͵�ָ��
    scanf("%d",&size);
    // malloc ���ص���void *����������ָ��
    p = malloc(size);

    strcpy(p,"malloc success");

    free(p); // �ͷ�����ռ�ʱ�����ĵ�ַ���������malloc���صĵ�ַ��
    return 0;
}
