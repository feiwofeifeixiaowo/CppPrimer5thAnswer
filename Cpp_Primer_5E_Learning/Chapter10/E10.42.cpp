//
// Created by Xiyun on 2016/10/24.
//
// Exercise 10.42:
// Reimplement the program that eliminated duplicate words that
// we wrote in § 10.2.3 (p. 343) to use a list instead of a vector.

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    // list  通常不使用通用算法，使用内置算法
    list<string> words{"hello","hello","wordld","words","hi","what","hi","where"};
    words.sort();
    words.unique();
    for_each(words.cbegin(),words.cend(),
                [](const string &s){cout << s << "\t";});
    return 0;
}
