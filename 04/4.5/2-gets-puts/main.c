#include <stdio.h>

int main() {
    char c[20];
    gets(c); // gets中接收char类型指针
    puts(c);
    // puts 等价于下面这句话，put的参数只能是char类型指针
    printf("%s\n",c);
    return 0;
}
