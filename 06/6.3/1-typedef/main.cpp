#include <iostream>
#include "string.h"

typedef struct student {
    int num;
    char name[20];
    char sex;
} stu, *ps;


typedef int INTEGER;
int main() {
    stu s;
    ps pstu1 = &s;
    s.num = 18;
    strcpy(s.name, "abc");
    s.sex = 'a';

    std::cout << "姓名：" << pstu1->name << "\n年龄：" << pstu1->num << "\n性别：" << pstu1->sex << std::endl;

    INTEGER i = 10;
    std::cout << i << std::endl;

    return 0;

}
