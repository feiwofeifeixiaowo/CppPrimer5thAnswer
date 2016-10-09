//
// Created by Xiyun on 2016/9/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1{1,2,3,4,5};
    vector<int> ivec2{1,2,3,4};

    cout << (ivec1 == ivec2 ? "True":"False") << endl;
    return 0;
}
