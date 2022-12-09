#include <stdio.h>

int main() {
    int year;
    printf("Input the year >>>");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("%d It's a leap year\n", year);
    } else{
        printf("%d It's not a leap year\n", year );
    }
    return 0;
}
