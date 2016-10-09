//
// Created by Xiyun on 2016/10/8.
//
#include <string>
#include <iostream>

using namespace std;

void replaceStr(string &s,const string &oldVal,const string &newVal)
{
    for(string::size_type si=0; si<=s.size() - oldVal.size();)
    {
        if(oldVal==s.substr(si,oldVal.size()))
        {
            s.replace(si,oldVal.size(),newVal);
            si+=oldVal.size();
        }
        else
        {
            ++si;
        }
    }
}

int main()
{
    string s = "hello world!!!";
    string oldVal = "o";
    string newVal = "NNN";
    replaceStr(s,oldVal,newVal);
    cout << s << endl;
    return 0;
}