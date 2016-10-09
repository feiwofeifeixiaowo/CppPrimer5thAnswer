//
// Created by Xi on 2016/3/10.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main ()
{
    const int i = 42;
    auto j = i; // int
    cout << typeid(j).name() << endl;
    const auto &k = i; // const int
    cout << typeid(k).name() << endl;
    auto  *p = &i; // const int*
    cout << typeid(p).name() << endl;
    const auto j2 = i, &k2 = i; // const int ; int
    cout << typeid(j2).name() <<"\t" << typeid(k2).name() << endl;
}
