//
// Created by Xiyun on 2016/9/28.
// wrong answer !!!

#include <iostream>
#include <vector>

using namespace std;

void double_and_insert(vector<int> &v,int someVal)
{
    auto mid = [&]{return (v.begin() + v.size()/2);};
    for(auto cur = v.begin(); cur != mid(); ++cur){
        if(*cur == someVal) {
            ++(cur = v.insert(cur,someVal*2));//after insert cur is invalid ,so do ++ is our work not for loop
        }
    }
}

int main()
{

    vector<int> ivec{1,1,4,4,5,1,1};

    double_and_insert(ivec,1);

    for(auto v:ivec){
        cout << v << " ";
    }
    cout << endl;
    return 0;
}
