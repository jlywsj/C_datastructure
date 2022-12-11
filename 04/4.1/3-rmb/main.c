#include <stdio.h>

int main() {
    // 100元的人民币换成10元，5元，2元和1元的票。要求正好40张且每种票至少一张，问有多少种换发？
    // 变量不给初始值默认是随机的
    int ten, five, two, one, result = 0;
    for ( ten = 1; ten < 9; ++ten) {
        for ( five = 1; five < 16; ++five) {
            for ( two = 1; two < 37; ++two) {
                for (one = 1; one < 37; ++one) {
                    if(ten + five + two + one == 40 && ten * 10 + five * 5 + two * 2 + one == 100){
                        result++;
                    }
                }
            }
        }
    }

    printf("%d",result);
    return 0;
}
