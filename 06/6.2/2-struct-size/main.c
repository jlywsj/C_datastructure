#include <stdio.h>

// �ṹ��������
// �ṹ��Ĵ�Сһ��������Ա��С��������
int main() {
    struct student_type1{
        double score;
        short age;
        // 16
    };

    struct student_type2{
        double score;
        int height;    // ����������ʹ�С�ĺ�С����󳤶�8����ô�ͽ����Ƿŵ�һ�𣬿��Լ����ڴ�ռ��ռ��
        short age;
        // 16   // �������飬����Ŀ��������������ټ�
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
