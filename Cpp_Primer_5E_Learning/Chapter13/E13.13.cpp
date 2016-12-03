//
// Created by Xiyun on 2016/12/3.
//
#include <iostream>
#include <vector>

struct X {
    X() {std::cout << "X()" << std::endl;}
    X(const X&) {std::cout << "X(const X&)" << std::endl;}
    ~X() {std::cout << "~X()" << std::endl;}
    X& operator=(const X&) {}
};

int main() {
    X x1;
    X &x2 = x1;
    X x3 = x1;
    X x4 = new X();
    std::vector<X> vec;

    return 0;
}
