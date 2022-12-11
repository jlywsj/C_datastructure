#include <stdio.h>

int main() {
    int a, b=0, backup_a;
    scanf("%d", &a);
    backup_a = a;
    while (a){
        b = b*10 + a%10;
        a = a/10;
    }

    if(b == backup_a){
        printf("yes");
    } else{
        printf("no")
    }

    return 0;
}
