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
    // C/C++为了效率，所以不会对数组判断是否访问越界，
    // 因此当数组访问越界的时候，依然能够执行（会操作后面的数据），这是非常可怕的
//    printf("%s",a);
    print(a);
    return 0;
}
