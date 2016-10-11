//
// Created by Xiyun on 2016/10/11.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

void algorithmTest();

void countTest();

int main()
{
//    algorithmTest();
    countTest();
    return 0;
}
/*
 * algorithm Test
 * return void
 * param
 * */
void algorithmTest()
{
//    遍历 vector
//    int val = 42;
//    vector<int> ivec{1,2,34,5,43,6,42};
//    auto result = find(ivec.begin(),ivec.end(),val);
//    cout << "The value " << val <<(result == ivec.end() ? "  is not present":"  is present ")<< endl;

//  遍历 list
//    list<string> slist{"hello","world","value","of","something"};
//    auto result1 = find(slist.cbegin(),slist.cend(),"something");
//    if(result1 != slist.end()) cout << "show up " << endl;

//  遍历 内置数组
//  如果不存在 *result 为 0
    int ia[] = {23,112,12,43,6,8,533};
    int val = 41;
    int *result = find(begin(ia),end(ia),val);
    cout << *result << endl;
}

void countTest()
{
    //count 算法测试
    //返回给定值在序列中出现的次数
    //传入两个迭代器，一个查找值
    vector<int> ivec{1,2,3,3,3,4,5,6,77,3,3};
    auto result = count(ivec.cbegin(),ivec.cend(),3);
    cout << result << endl;
}