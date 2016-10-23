//
// Created by Xiyun on 2016/10/23.
//
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
    vector<int> ivec;
    vector<int> c_vec;
    list<int> ilst;
    forward_list<int> flst;

    for(auto i = 1; i!=10; ++i)
        ivec.push_back(i);

    // inserter
    copy(ivec.cbegin(),ivec.cend(),inserter(c_vec,c_vec.begin()));
    //back_inserter
    copy(ivec.cbegin(),ivec.cend(),back_inserter(ilst));
    //front_inserter
    copy(ivec.cbegin(),ivec.cend(),front_inserter(flst));

    cout << "inserter" << endl;
    for_each(c_vec.cbegin(),c_vec.cend(),
                [](const int &i){cout << i << "\t";});
    cout << endl;

    cout << "back_inserter" << endl;
    for_each(ilst.cbegin(),ilst.cend(),
             [](const int &i){cout << i << "\t";});
    cout << endl;

    cout << "front_inserter" << endl;
    for_each(flst.cbegin(),flst.cend(),
             [](const int &i){cout << i << "\t";});
    cout << endl;
    return 0;
}
