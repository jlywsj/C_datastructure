#include <stdio.h>

// 结构体的对齐（必须是最大成员的整数倍）
// int / float / long / unsigned long: 4字节， long long / double : 8字节
// char : 1字节  unsigned int / short int : 2字节
struct student {
    // 最大成员长度为4个字节不包括数组长度，数组长度最后计算
    int num;    // 可以被4整除，不需要补齐
    char name[20];  // 20个长度可以被4整除。不需要补齐
    char sex;   // 不能被4整除，需要 + 3
    int age;    // 可以
    float score;    // 可以
    char addr[30];  // 不可以，30 % 4 = 2,需要 补2个字节
    // 最终占：4 + 20 + 1+3 + 4 + 4 + 30+2 = 68
};  // 结构体类型声明，注意最后一定要加分号

int main() {
    struct student *s = NULL;
    // 结构体输出必须单独去访问内部的每个成员

//    printf("%d %s %c %d %f %s", s.num, s.name, s.sex, s.age, s.score, s.addr);
//    scanf("%d%s %c%d%f%s",&s.num,s.name,&s.sex,&s.age,&s.score,s.addr); // 除了%c其余的都会忽略前面的空格所以除了%c其余的都能紧挨着
//    printf("%d %s %c %d %f %s", s.num, s.name, s.sex, s.age, s.score, s.addr);

    struct student arr[3];  // 定义一个结构体数组对象
    for (int i = 0; i < 3; ++i) {
        s = &arr[i];
        scanf("%d%s %c%d%f%s",&s->num,s->name,&s->sex,&s->age,&s->score,s->addr); // 除了%c其余的都会忽略前面的空格所以除了%c其余的都能紧挨着
    }

    for (int i = 0; i < 3; ++i) {
        s = &arr[i];
        printf("%d %s %c %d %f %s\n", s->num, s->name, s->sex, s->age, s->score, s->addr);
    }

    printf("%d",sizeof (long ));   // float是四个字节

    return 0;
}
