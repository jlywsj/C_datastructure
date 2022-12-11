#include <iostream>


// C++ 中的引用
void modifynum(int &num){
    num *= num;
}

int main() {
    int num = 10;
    modifynum(num);
    int a = 2;
    int &b = a; // &引用就是给变量起别名，类似于指针，两个变量名表示同一块内存。 
    std::cout<< "num = "<<num << std::endl;
    return 0;
}
