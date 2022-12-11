//#include <stdio.h>
//#include "string.h"
//
//int main(void)
//{
//    int nums_count = 0;
//    int arr[100];
//    int result = 0;
//    scanf("%d",&nums_count);
//    for(int i = 0;i < nums_count;i++){
//        scanf("%d",&arr[i]);
//        if(arr[i] == 2){
//            result++;
//        }
//    }
//
//    printf("%d",result);

//    printf("%d",strcmp("a", "?"))   ;
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char str2[100];
    scanf("%s",str);
    int i = len(str)-1;
    int j = 0;
    while(i>-1){
        str2[j] = str[i];
        j++;
        i--;
    }

    int result = strcmp(str,str2);
    if (result < 0){
        printf("%d\n",-1);
    }else if (result > 0){
        printf("%d\n", 1);
    }else {
        printf("%d\n", 0);
    }

    return 0;
}