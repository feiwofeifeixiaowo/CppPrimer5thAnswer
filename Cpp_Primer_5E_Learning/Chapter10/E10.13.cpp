//
// Created by Xiyun on 2016/10/18.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s("abcdefg");
    bool predict = false;
    //
    partition(s.begin(),s.end(),predict);
    return 0;
}
