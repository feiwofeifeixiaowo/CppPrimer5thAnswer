//
// Created by Xiyun on 2016/11/27.
//

#include <iostream>
#include <string>
#include <memory>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::allocator;

int main () {
    const int n = 3;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    auto q = p;
    string s;
    while (q != p + n && cin >> s) {
        alloc.construct(q++, s);
    }
    while (q != p) {
        cout << *--q << " ";
        alloc.destroy(q);
    }
    alloc.deallocate(p, n);
    return 0;
}