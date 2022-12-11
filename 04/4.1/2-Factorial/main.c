#include <stdio.h>

int main() {
    int a, result=1;
    scanf("%d", &a);
    while (a){
        result *= a;
        a--;
    }
    printf("%d",result);
    return 0;
}
