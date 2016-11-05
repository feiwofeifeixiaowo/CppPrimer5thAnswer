//
// Created by Xiyun on 2016/11/5.
//
#include <iostream>
#include <vector>
#include "../include/Sales_data.h"

//比较大小的模板
template <typename T>
int compare(const T &t1, const T &t2)
{
    if(t1 < t2) return -1;
    if(t2 < t1) return 1;
    //上面这种写法只需要支持 < 运算符
    //下面这种还需要支持     > 运算符
    //if(t1 > t2) return 1;
    return 0;
}

//模板类型直接当做参数
template <typename T> T foo(T* p)
{
    T tmp = *p;
    return tmp;
}

template<unsigned N, unsigned M>
int compare_c(const char (&p1)[N], const char (&p2)[M])
{
    return strcmp(p1,p2);
}

int main()
{
    std::vector<int> vec1{1,2,3};
    std::vector<int> vec2{4,5,6};
    std::cout << compare(vec2,vec1) << std::endl;
    std::cout << compare_c("hi","com") << std::endl;

    //Sale_data compare
    //error: invalid operands to binary expression ('const Sales_data' and 'const Sales_data')
    compare(Sales_data("book-1"),Sales_data("book-2"));

    return 0;
}