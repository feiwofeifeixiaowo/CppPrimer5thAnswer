//
// Created by Xiyun on 2016/9/29.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;

    int i = ivec.at(0);// got out of range exception

    int i2 = ivec.front();

    int i3 = *ivec.begin();

    cout << i << " "<< i2 << " "<< i3 << " ";

    return 0;
}
