//
// Created by Xiyun on 2016/12/16.
//

#include <iostream>
#include <vector>

// 模板定义模板参数列表不能为空
template <typename T>
int compare(const T& v1, const T& v2) {
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

template <unsigned N, unsigned M>
int compare_ch(const char (&p1)[N], const char (&p2)[M]) {
    return strcmp(p1, p2);
}

// 函数模板可以定义为inline constexpr，但是关键词要放在 模板参数列表之后
template <typename T> inline T min(const T&, const T&);
template <typename T> constexpr T max(const T&, const T&);

using std::cout;
using std::endl;
using std::vector;

int main() {
    cout << compare(1, 1) << endl;
    vector<int> v1{3, 2, 3, 4};
    vector<int> v2{2, 3, 4, 5};
    cout << compare(v1, v2) << endl;
    cout << compare_ch("test","hello") << endl;
    return 0;
}

