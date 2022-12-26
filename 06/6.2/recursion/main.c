#include <stdio.h>
#include "stdlib.h"

int f(int n) {
    int *arr = calloc(n+1, sizeof(int));
    arr[0] = arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (arr[i] == 0) {
            arr[i] = arr[i-1] * i;
        }
    }
//    if (n == 0 || n == 1) {
//        return 1;
//    } else {
//        return n * f(n - 1);
//    }

    for (int i = 0; i <= n; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return arr[n];
}

// ������̨��
int frog(int n){
    if(1 == n || 2 == n){
        return n;
    }else{
        return frog(n-1) + frog(n-2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
//    printf("%d�Ľ׳��ǣ�%d", n, f(n));
    printf("����%d��̨�׵�������%d��",n, frog(n));
    return 0;
}
