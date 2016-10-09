//
// Created by Xiyun on 2016/9/23.
//
#include <iostream>
#include <vector>
using namespace std;

bool compareArray(int *const pb1,int *const pb2,int *const pe1, int *const pe2)
{
    if((pe1-pb1) != (pe2-pb2)) return false;//different size
    else
    {
        for(int *i = pb1, *j = pb2; (i != pe1 )&& (j!= pe2); ++i,++j)
            if(*i != *j) return false;

    }
    return true;
}

int main()
{
    int ia[3] = {1,2,3};
    int ia2[3] = {1,2,3};
    if(compareArray(begin(ia),begin(ia2),end(ia),end(ia2)))
        cout << "equal" << endl;
    else
        cout << "difference" << endl;

    vector<int> ivec1{1,2,3};
    vector<int> ivec2{1,2,3};
    if(ivec1 == ivec2)
        cout << "equal" << endl;
    else
        cout << "difference" << endl;
    return 0;
}