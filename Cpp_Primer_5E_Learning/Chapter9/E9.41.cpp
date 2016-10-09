//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char > vec{'a','b','c','d','e'};

    string s1(vec.begin(),vec.end());

    cout << "Test: "<< s1 << endl;
    return 0;
}
