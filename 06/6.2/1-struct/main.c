#include <stdio.h>

// �ṹ��Ķ��루����������Ա����������
// int / float / long / unsigned long: 4�ֽڣ� long long / double : 8�ֽ�
// char : 1�ֽ�  unsigned int / short int : 2�ֽ�
struct student {
    // ����Ա����Ϊ4���ֽڲ��������鳤�ȣ����鳤��������
    int num;    // ���Ա�4����������Ҫ����
    char name[20];  // 20�����ȿ��Ա�4����������Ҫ����
    char sex;   // ���ܱ�4��������Ҫ + 3
    int age;    // ����
    float score;    // ����
    char addr[30];  // �����ԣ�30 % 4 = 2,��Ҫ ��2���ֽ�
    // ����ռ��4 + 20 + 1+3 + 4 + 4 + 30+2 = 68
};  // �ṹ������������ע�����һ��Ҫ�ӷֺ�

int main() {
    struct student *s = NULL;
    // �ṹ��������뵥��ȥ�����ڲ���ÿ����Ա

//    printf("%d %s %c %d %f %s", s.num, s.name, s.sex, s.age, s.score, s.addr);
//    scanf("%d%s %c%d%f%s",&s.num,s.name,&s.sex,&s.age,&s.score,s.addr); // ����%c����Ķ������ǰ��Ŀո����Գ���%c����Ķ��ܽ�����
//    printf("%d %s %c %d %f %s", s.num, s.name, s.sex, s.age, s.score, s.addr);

    struct student arr[3];  // ����һ���ṹ���������
    for (int i = 0; i < 3; ++i) {
        s = &arr[i];
        scanf("%d%s %c%d%f%s",&s->num,s->name,&s->sex,&s->age,&s->score,s->addr); // ����%c����Ķ������ǰ��Ŀո����Գ���%c����Ķ��ܽ�����
    }

    for (int i = 0; i < 3; ++i) {
        s = &arr[i];
        printf("%d %s %c %d %f %s\n", s->num, s->name, s->sex, s->age, s->score, s->addr);
    }

    printf("%d",sizeof (long ));   // float���ĸ��ֽ�

    return 0;
}
