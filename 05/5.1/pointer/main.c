#include <stdio.h>

int change(int j)
{
    j = 5;
    return j;
}


int main() {
    int i = 10;
    change(i);
    printf("%d\n",i);

    char str[100] = {0};
//    scanf("%s",str);
    gets(str);
    printf("%s",str);

    return 0;
}