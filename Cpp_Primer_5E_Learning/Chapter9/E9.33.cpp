//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> vi{0,2,4,6,8};
    auto begin = vi.begin();
    while(begin!= vi.end())
    {
        ++begin;
//        begin = vi.insert(begin,24);
        vi.insert(begin,24);//crash iterator invalid after issert operate
        ++begin;
    }

    for(auto i:vi) cout << i << "\t";
    cout << endl;
    return 0;
}

