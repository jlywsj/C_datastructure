#include <stdio.h>

int main() {
    // 100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��Ʊ��Ҫ������40����ÿ��Ʊ����һ�ţ����ж����ֻ�����
    // ����������ʼֵĬ���������
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
