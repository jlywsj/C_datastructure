#include <iostream>


// C++ �е�����
void modifynum(int &num){
    num *= num;
}

int main() {
    int num = 10;
    modifynum(num);
    int a = 2;
    int &b = a; // &���þ��Ǹ������������������ָ�룬������������ʾͬһ���ڴ档 
    std::cout<< "num = "<<num << std::endl;
    return 0;
}
