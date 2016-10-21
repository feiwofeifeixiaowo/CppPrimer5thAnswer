//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

int main()
{   vector<int> ivec{3,1,4,6,43};
    string s{"hello,world!"};
    auto wc = find_if(ivec.begin(),ivec.end(),
                        bind(check_size,s,_1));
    cout << *wc << endl;
    return 0;
}
