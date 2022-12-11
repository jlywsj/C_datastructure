#include <stdio.h>
#include "stdlib.h"
#include "string.h"
struct Student{
    int num;
    char name[50];
    char sex;
};

int main(){
    struct Student student;
    struct Student *s;
    s = &student;
    int num;
    char name[50];
    char sex;
    scanf("%d %s %c",&num, name, &sex);
    s->num = num;
    s->sex = sex;
    strcpy(s->name,name);
    printf("%d %s %c",s->num,s->name,s->sex);
    return 0;
}