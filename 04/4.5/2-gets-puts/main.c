#include <stdio.h>

int main() {
    char c[20];
    gets(c); // gets�н���char����ָ��
    puts(c);
    // puts �ȼ���������仰��put�Ĳ���ֻ����char����ָ��
    printf("%s\n",c);
    return 0;
}
