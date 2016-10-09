//
// Created by Xiyun on 16/9/18.
//
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
    vector<int> ivec1 {42,42,42,42,42,42,42,42,42,42};
    vector<int> ivec2(10,42);
    vector<int> ivec3;
    for (decltype(ivec1.size()) i  = 0; i != 10; ++i)
    {
        ivec3.push_back(42);
    }
    cout << "the ivec2 is prefer better approach!" << endl;
    return 0;
}
