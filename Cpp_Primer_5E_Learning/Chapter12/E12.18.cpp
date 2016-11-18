//
// Created by Xiyun on 2016/11/18.
//

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    using IntP = unique_ptr<int>;
    return 0;
}