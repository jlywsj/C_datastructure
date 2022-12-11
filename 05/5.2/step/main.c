#include <stdio.h>

int count = 0;

void jump(int n) {
    if (n == 0) {
        count++;
    } else if (n > 0){
        jump(n - 1);
        jump(n - 2);
    }
}

int main() {
    jump(5);
    printf("%d", count);
    return 0;
}

