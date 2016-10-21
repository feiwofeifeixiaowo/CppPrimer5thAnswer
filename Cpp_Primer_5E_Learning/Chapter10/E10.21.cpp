//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    auto f = [&]() -> bool {
        if(a == 0)
            return true;
        else
        {
            --a;
            return false;
        }
    };

    while(!f())
        cout << a << "\t";
    cout << endl;

    return 0;
}
