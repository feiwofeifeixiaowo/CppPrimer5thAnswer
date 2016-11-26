//
// Created by Xiyun on 2016/11/26.
//
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {
    // 经过测试，输入超出给定大小，超出的部分被抛弃
    cout << " input size: ";
    int size = 0;
    char* p = new char[size]();
    cin >> size;
    cin.ignore();
    cout << "input string: ";
    cin.get(p, size+1);
    cout << p << endl;
    delete[] p;
    return 0;
}
