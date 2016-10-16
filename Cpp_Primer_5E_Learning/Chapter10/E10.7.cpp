//
// Created by Xiyun on 2016/10/15.
//
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    // exercise a
    vector<int> vec;
    list<int> lst;
    int i;
    while(cin >> i){
        lst.push_back(i);
        if(lst.size() == 5) break;
    }
    vec.resize(lst.size());
    copy(lst.cbegin(),lst.cend(),vec.begin());
    for(auto i:vec)
        cout << i << "\t";
    cout << endl;

    // exe b
    vector<int> ivec;
    cout << "size: " << ivec.size() << "capacity: " << ivec.capacity() << endl;
    ivec.reserve(10);
//    ivec.resize(10);
    cout << "size: " << ivec.size() << "capacity: " << ivec.capacity() << endl;
//    fill_n(ivec.begin(),10,1);
    fill_n(back_inserter(ivec),10,1);
    for(auto i:ivec)
        cout << i << "\t";
    cout << endl;
    return 0;
}
