//
// Created by Xiyun on 2016/11/5.
//
#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

template<typename iter, typename value>
iter& my_find(iter first, iter end, const value& v)
{
    while(first != end && *first != v)
    {
        ++first;
    }
    return first;
}

int main()
{
    vector<int> ivec{1,2,3,4,5};
    list<string> lst{"hello","world"};
    auto ret = my_find(ivec.cbegin(),ivec.cend(),3);
    auto ret1 = my_find(lst.cbegin(),lst.cend(),"hello");
    cout << *ret << endl;
    cout << *ret1 << endl;
    return 0;
}
