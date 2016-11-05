//
// Created by Xiyun on 2016/11/5.
//

#include <iostream>
using namespace std;

template <typename Arr, unsigned size>
constexpr unsigned getSize(const Arr(&)[size])
{
    return size;
}

int main()
{
    int arr[10];
    cout << getSize(arr) << endl;
    return 0;
}