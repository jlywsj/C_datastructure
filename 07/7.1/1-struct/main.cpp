#include <iostream>

typedef struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
} stu, *pstu;  // 结构体类型声明，注意最后一定要加分号

int main() {
    struct student s1;
    stu s2;
    pstu ps1 = &s1;

    scanf("%d%s %c%d%f%s",&s1.num, s1.name, &s1.sex, &s1.age, &s1.score, s1.addr);
    printf("%d %s %c %d %.2f %s",s1.num, s1.name, s1.sex, s1.age, s1.score, s1.addr);

    return 0;
}