//
// Created by Xiyun on 2016/10/8.
//

#include <iostream>
#include <string>

using namespace std;

void replacStr(string &s,const string &oldVal,const string &newVal)
{
   for(auto curr=s.begin(); curr <= s.end() - oldVal.size();)
   {if(oldVal== string{curr,curr+oldVal.size()})
       {
           curr = s.erase(curr,curr+oldVal.size());
           curr = s.insert(curr,newVal.begin(),newVal.end());
           curr += oldVal.size();
       }
       ++curr;
   }
}

int main()
{
    string s = "hello world!";
    string oldVal = "o";
    string newVal = "OOO";
    replacStr(s,oldVal,newVal);
    cout << s << endl;
    return 0;

}
