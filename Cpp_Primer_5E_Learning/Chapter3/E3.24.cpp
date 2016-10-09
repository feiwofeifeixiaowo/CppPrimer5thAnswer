//
// Created by Xiyun on 2016/9/22.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{1,2,3,4,4,5,5};
    for(auto it = ivec.begin(); it != ivec.end() - 1; ++it)
        cout << *it + *(it+1) << "\t";
    cout << endl;

    //注意结尾的访问
    for( auto beg = ivec.begin(),end = ivec.end() - 1;beg != end; ++beg,--end)
    {
        cout << *beg + *end << "\t";
    }

    return 0;
}
