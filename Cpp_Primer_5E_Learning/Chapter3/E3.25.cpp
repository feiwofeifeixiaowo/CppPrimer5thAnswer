//
// Created by Xiyun on 2016/9/22.
//
#include <iostream>
#include <vector>

using namespace std;

int arrayTest();
int arrayTest2();
int CharArrayTest();
int main()
{
    /*
    // 使用迭代器
    // 利用迭代器加法让迭代器移动到指定位置，解引用，分数段的值加一
    vector<unsigned> scores{100,92,89,67,78,79,76,66};
    vector<unsigned> pattern (11,0);
    for(auto s: scores)
        if(s <= 100)
            ++*(pattern.begin() + s/10);
    for(auto p : pattern)
        cout << p << " ";

    arrayTest();
    */
    CharArrayTest();
    return 0;
}

int arrayTest()
{
    int arr[10];//十个整数的数组
    constexpr unsigned sz = 42;//常量表达式
    int* parr[sz];//包含42个int 指针的数组
    unsigned cnt = 42;
//    string band[cnt];//cnt 不是常量表达式  错误
    // variable length array of non-POD element type 'string' (aka 'basic_string<char, char_traits<char>, allocator<char> >')
//    string str[get_size()];
    return 0;
}

int arrayTest2()
{
    const unsigned sz = 3;
    int ia1[sz] = {1,2,3};
    int a2[] = {0,1,2};
    int a3[5] = {1,2,3};
    string a4[3] = {"hi","where","r"};
//    int a5[2] = {1,2,3};//错误

    return 0;
}

int CharArrayTest()
{
    char a1[] = {'C','+','+'};//列表初始化、 没有 \0
    char a2[] = {'C','+','+','\0'};
    char a3[] = "C++";// \0 被隐式添加到末尾
    const char a4[6] = "Daniel";//error: initializer-string for char array is too long

    // 数组不能复制  赋值
//    int ta[] = {1,2,3};
//    int ta2[] = ta;//数组不能用来初始化数组
//    ta2 = ta;// 数组不能赋值给另一个数组，在clang 中可以编译通过，不是标准库推荐的方式


// It can be easier to understand array declarations by starting with the array's name and reading from the inside out.

    return 0;
}