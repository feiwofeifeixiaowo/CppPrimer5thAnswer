//
// Created by Xiyun on 2016/9/23.
//
#include <iostream>
#include <vector>

using namespace std;

int arrayTest();
//使用数组的时候编译器一般会把它转换成指针
int main()
{
    /*
    int ia[10];
    for(size_t i =0; i != 10; ++i )
        ia[i] = i;
    int ib[10];
    for(auto i: ia)
        ib[i] = ia[i];

    vector<int> ivec1;
    for(auto i = 0; i != 10; ++i )
        ivec1.push_back(i);
    vector<int> ivec2 = ivec1;

    for(auto i : ivec2)
        cout << ivec2[i] << " ";
    cout << endl;
    */
    arrayTest();
    return 0;
}
int arrayTest()
{
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
//    auto ia2(ia); illegal
    auto ia2(&ia[0]);
    decltype(ia) ia3 = {1,2,3,4,5,6,7,8,9};
    ia3[4] = 10;

    int *b = ia3;
    int *e = &ia3[9];
    for(;b != e; ++b)
        cout << *b << " ";
    cout << endl;

    int *beg = begin(ia3);
    int *last = end(ia3);

    //begin  end 内建函数获取首元素指针跟尾后指针
    //尾后指针不可以执行解引用操作
    while(beg != last && *beg >= 0)
        beg++;

    while(beg != last)
        *beg = 0;

    return 0;
}