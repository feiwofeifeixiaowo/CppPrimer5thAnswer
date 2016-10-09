//
// Created by Xiyun on 2016/9/22.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8};
//    for(int input = 0; cin >> input; ivec.push_back(input))

//    for(auto& i :ivec)
//    {
//        i *= 2;
//        cout << i << " ";
//    }

    for(auto it = ivec.begin(); it != ivec.end(); ++it)
    {
        *it *= 2;
        cout << *it << " ";
    }

    return 0;
}