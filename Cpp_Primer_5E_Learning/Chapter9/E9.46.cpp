//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <string>

using namespace std;

string & insertAppend(string &name,const string &pre,const string &su)
{
    name.insert(0,pre);
    name.insert(name.size(),su);
    return name;
}
int main()
{
    string name = "Tom";
    cout << insertAppend(name,"Mr. "," II") << endl;
    return 0;
}
