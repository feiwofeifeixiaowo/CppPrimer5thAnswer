//
// Created by Xiyun on 2016/9/22.
//
#include <iostream>

using namespace std;

int main()
{
    int ia[10];
    int *ib = new int[10];
    for(size_t i = 0; i != 10; ++i)
        ia[i] = i;

    for(size_t i=0; i !=10; ++i)
    {
        ib[i] = i;
    }

    for(size_t i=0; i !=10; ++i)
    {
        cout << ib[i] << '\t';
    }
    return 0;
}
