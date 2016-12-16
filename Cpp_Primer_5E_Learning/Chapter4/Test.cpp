//
// Created by Xiyun on 2016/12/15.
// 类型转换
//
#include <iostream>

int main() {
    int ival = 3.541 + 3;    // Clion 警告这里会损失精度
    std::cout << ival << std::endl;
    // 显式转换
    // cast-name<type>(expression)
    // static_cast 只要不包含底层const （指针指向的对象不可以改变为底层const），都可以使用static_cast
    int i = 10, j = 12;
    double slope = static_cast<double> (j) / i;    //Clion 不会警告精度损失
    std::cout << slope << std::endl;
    return 0;
}