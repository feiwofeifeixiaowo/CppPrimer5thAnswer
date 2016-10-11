//
// Created by Xiyun on 2016/10/11.
//
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{12,3,3,4,5,6,77,8};
    int sum = accumulate(ivec.cbegin(),ivec.cend(),0);
    cout << "sum of value in vector is :  " << sum << endl;
    return 0;
}
