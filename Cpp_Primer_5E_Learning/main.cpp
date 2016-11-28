// Copyright ® xy

#include <iostream>
#include <string>
#include <memory>
#include <limits>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::allocator;
using std::numeric_limits;

int foo(int i, int j) {
    return i + j;
}

int main() {
    cout << "Hello, World!" << endl;
    int i = 2;
    //cout << "result is: " << ((i++) + (++i)) << endl;
    //cout << foo(i++, ++i);    // UB
    // test strtold()
//    auto a(123456789098765432123456789009876543212345678901234567890123456);
    cout << "ull: " << numeric_limits<unsigned long long>::max() << endl;
    string s(1000,'8');
    char* end;
    long double ret = strtold(s.c_str(), &end);
//    cout << a << endl;
    cout << "str: " << s << endl;
    cout << "ret: " << ret << endl;

    cout << "hello" "world" << endl;

    // allocator test
    string *const p = new string[10];
    string s1;
    string *q = p;
    while (cin >> s1 && q != p + 10)
        *q++ = s;
    const size_t size = q - p;
    delete[] p;

    // 可以分配string 对象的alloc
    allocator<string> alloc;
    // 分配了10个未初始化的string
    auto const p1 = alloc.allocate(10);
    // q1 指向最后构造的元素之后的位置
    auto q1 = p1;
    // 对分配的内存进行构造
    alloc.construct(q1++);
    // 释放构造的string
    while (q1 != p1)
        alloc.destroy(--q1);    // destroy后，q1 指向最后一个构造的元素。
     // 释放内存
    alloc.deallocate(p, 10);
    return 0;
}

