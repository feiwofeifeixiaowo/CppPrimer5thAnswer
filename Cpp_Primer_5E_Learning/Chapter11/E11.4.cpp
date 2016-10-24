//
// Created by Xiyun on 2016/10/24.
//
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

auto strip(string &str) -> string const&
{
    //letter to lower
    for(auto &ch : str) ch = tolower(ch);
    //remove punct
    str.erase(remove_if(str.begin(),str.end(),
                        [](char &ch){return ispunct(ch);}),str.end());
    return str;
}

int main()
{
    map<string, size_t> word_count;
    string word;
    while(cin >> word)
    {
        //录入到map中
        ++word_count[strip(word)];
        //退出while
        if(word_count.size() > 5)
            break;
    }
    //输出
    for(const auto &w : word_count)//w is a pair
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}