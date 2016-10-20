//
// Created by Xiyun on 2016/10/20.
//
//lambda 表达式

#include <iostream>
#include <vector>
#include <string>

using  namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

void test(vector<string> &words)
{
    auto f = [](const string &a,const string &b)
    {return a.size() < b.size();};

//    stable_sort(words.begin(),words.end(),
//    [](const string &a,const string &b)
//    {return a.size() < b.size();});

    stable_sort(words.begin(),words.end(),f);
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),
                [](const string &a, const string &b)
                    {return a.size() < b.size();});
    auto wc = find_if(words.begin(),words.end(),
                    [sz](const string &a)
                    {return a.size() >= sz;});
}

int main ()
{
    //lambda 测试
    //lambda必须包含捕获列表、函数体，可选{返回值类型、参数列表}
    auto f = [] {return 42;};
    cout << f() << endl;
    return 0;
}