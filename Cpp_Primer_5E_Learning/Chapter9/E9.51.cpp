//
// Created by Xiyun on 2016/10/9.
//
#include <string>
#include <iostream>
#include <vector>
using namespace std;

// 主要问题在 string.substr(pos,n)
// 这个函数 pos 是切分的开始位置，
//         n   是要截取的字符数量
//
int main()
{
//    string date1("January,1,1900");
//    string date1("1/1/1900");
    string date1("Jan 1 1900");

    string split("/ ,");
    string::size_type sz = 0;
    string word;

    vector<string> svec;
//    string str(date1);
    while(sz <= date1.size())
    {
        auto index = date1.find_first_of(split,sz);
        if(index != string::npos)
        {
            word = date1.substr(sz,date1.find_first_of(split,sz) - sz);
            sz+= (word.size()+1);
            svec.push_back(word);
//            cout << word << endl;
        }
        else
        {   sz -=word.size();
            word = date1.substr(sz+1,date1.size());
            svec.push_back(word);
//            cout << word << endl;
            break;
        }
    }
    for(auto s:svec)
    {
        cout << s << endl;
    }
    cout << endl;
}
