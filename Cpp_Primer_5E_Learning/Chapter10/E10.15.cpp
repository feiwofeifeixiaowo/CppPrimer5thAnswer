//
// Created by Xiyun on 2016/10/21.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 1000;
    auto f = [a](int b){return a + b;};
    cout << f(1) << endl;
    return 0;
}