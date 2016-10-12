//
// Created by Xiyun on 2016/10/12.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    fill(ivec.begin(),ivec.begin()+ivec.size()/2,0);
    for (auto i:ivec)
        cout << i << "\t";
    cout << endl;
    return 0;
}
