#include <stdio.h>

// �Ӻ����������ǽ����õĹ��ܽ��з�װ����
void print(int arr[], int len) {
    for(int i = 0; i < len; i++){
        printf("%-3d", arr[i]);
    }
    printf("\n");
    arr[3] = 20;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr,5);
    printf("%d\n",arr[3]);
    return 0;
}
