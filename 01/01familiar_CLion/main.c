#include <stdio.h>

int main() {    
    int a = 0, b = 0, ret = 0;
    setvbuf(stdout,NULL,_IONBF,0);
    printf("输入一个数：\n");
    scanf("%d%d",&a,&b);
    ret = a+b;
    printf("%d",ret);
    return 0;
}
