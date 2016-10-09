//
// Created by Xiyun on 2016/9/29.
//
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = {0,11,2,3,5,8,13,21,55,89};
    vector<int> ivec(ia,end(ia));
//    list<int> lst(ia,end(ia));
    list<int> lst(ivec.begin(),ivec.end());

    for(auto l:lst)
        cout << l << " ";
    cout << endl;

    for(auto it = lst.begin();it!=lst.end();){
        if(*it & 0x1)
            it = lst.erase(it);
        else
            ++it;
    }

    for(auto it = ivec.begin(); it!=ivec.end();){
        if(!(*it & 0x1))
            it = ivec.erase(it);
        else
            ++it;
    }

    for(auto l:lst)
        cout << l << " ";

    cout << endl;

    for(auto i:ivec)
        cout << i << " ";

    return 0;
}
