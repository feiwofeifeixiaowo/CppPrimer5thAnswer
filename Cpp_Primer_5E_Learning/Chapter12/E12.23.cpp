//
// Created by Xiyun on 2016/11/26.
//

#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;
using std::puts;
using std::strcat;

int main() {
    string s1("hello");
    string s2("world");
    char* p = new char[s1.size() + s2.size() +1]();
    strcat(p, s1.c_str());
    strcat(p, s2.c_str());
    puts(p);
    delete[] p;
    // 使用string标准库连接
    cout << s1 + s2 << endl;
    return 0;
}