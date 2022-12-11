#include <stdio.h>

// 结构体对齐规则：
// 结构体的大小一定是最大成员大小的整数倍
int main() {
    struct student_type1{
        double score;
        short age;
        // 16
    };

    struct student_type2{
        double score;
        int height;    // 如果两个类型大小的和小于最大长度8，那么就将他们放到一起，可以减少内存空间的占用
        short age;
        // 16   // 除了数组，其余的可以在整体和完后再加
    };

    struct student_type3{
        int score;
        char size;
        short age;
        // 16
    };

    printf("s1 size=%llu\n",sizeof(struct student_type1));
    printf("s2 size=%llu\n",sizeof(struct student_type2));
    printf("s3 size=%llu\n",sizeof(struct student_type3));

    return 0;
}
