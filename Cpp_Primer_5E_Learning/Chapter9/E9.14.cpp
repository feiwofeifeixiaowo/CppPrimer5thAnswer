//
// Created by Xiyun on 2016/9/26.
//
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

int main()
{
    list<const char*> list1 {"Hello","world","!"};
//    vector<string> svec(list1.begin(),list1.end());
    vector<string> v;
    v.assign(list1.cbegin(),list1.cend());

    for(auto s: v)
        cout << s << endl;
    return 0;
}
