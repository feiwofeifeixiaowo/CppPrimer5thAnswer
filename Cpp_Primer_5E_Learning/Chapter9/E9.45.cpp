//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <string>

using namespace std;

string& insertAppend(string &name,const string &front,const string &end)
{
    auto beg = name.begin();
    name.insert(beg,front.begin(),front.end());
    name.append(end);
    return name;
}

int main()
{
    string name = "Tom";
    cout <<insertAppend(name,"Mr. ","_III") << endl;
    return 0;
}
