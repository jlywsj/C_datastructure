#include <stdio.h>

void print(char arr[]){
    int i = 0;
    while (arr[i]){
        printf("%c",arr[i]);
        i++;
    }
}

int main() {
    char a[9] = {'I', 'a', 'm', 'h', 'a', 'p', 'p', 'y',0};
    char b[] = "abcdef";
    // C/C++Ϊ��Ч�ʣ����Բ���������ж��Ƿ����Խ�磬
    // ��˵��������Խ���ʱ����Ȼ�ܹ�ִ�У��������������ݣ������Ƿǳ����µ�
//    printf("%s",a);
    print(a);
    return 0;
}
