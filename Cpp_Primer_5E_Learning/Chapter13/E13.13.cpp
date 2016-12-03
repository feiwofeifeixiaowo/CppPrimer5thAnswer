//
// Created by Xiyun on 2016/12/3.
//
#include <iostream>
#include <vector>

struct X {
    X() {std::cout << "构造函数 X()" << std::endl;}
    X(const X&) {std::cout << "拷贝构造函数 X(const X&)" << std::endl;}
    ~X() {std::cout << "析构函数 ~X()" << std::endl;}
    X& operator=(const X&) {
        std::cout << "拷贝赋值函数 X& operator=" << std::endl;
        return *this;
    }
};

void f1(X x) {}
void f2(X& x){}
using std::cout;
using std::endl;

int main() {
    cout << "局部变量" << endl;
    X x;
    cout << endl;
    cout << "非引用参数传递" << endl;
    f1(x);
    cout << endl;
    cout << "引用参数传递" << endl;
    f2(x);
    cout << endl;
    cout << "动态分配" << endl;
    X *px = new X;
    cout << "添加到容器中" << endl;
    // 当调用vector的insert push成员，容器会对元素进行拷贝初始化。用emplace成员创建的元素都进行直接初始化。
    std::vector<X> vec;
    vec.push_back(x);
    cout << "释放动态分配对象" << endl;
    delete px;
    cout << "间接初始化和赋值" << endl;
    X y = x;
    cout << "程序结束" << endl;
    // x, y, vec中的元素共三次析构函数
    return 0;
}
