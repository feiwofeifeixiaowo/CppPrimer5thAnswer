//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void elimDups(vector<string> &words)
{
    stable_sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    //去除重复元素
    elimDups(words);
    //按长度排序
    stable_sort(words.begin(),words.end(),
                [](const string &a, const string &b)
                {return a.size() < b.size();});
    //找到第一个size 大于 给定 sz 的 元素
//    auto wc = find_if(words.begin(),words.end(),
//                      [sz](const string &a)
//                      {return a.size() >= sz;});

    //使用partition 函数
//    auto wc = partition(words.begin(),words.end(),
//                        [sz](const string &s)
//                        {return s.size() < sz;});
    //使用  stable_partition 函数
    auto wc = stable_partition(words.begin(),words.end(),
                                [sz](const string &s)
                                { return s.size() < sz;});
    //计算满足 size >= sz 的元素的数目
    auto count = words.end() - wc;
    //输出
    cout << count << " " << make_plural(count,"word","s")
         << " of length " << sz << " or longer" << endl;
    //打印长度大于给定值的单词，每个单词后面接一个空格
    for_each(wc,words.end(),
             [](const string &elem){cout << elem << "\t";});
    cout << endl;
    for_each(words.begin(),words.end(),
             [](const string &elem){cout << elem << "\t";});
}


int main ()
{
    vector<string> words{"hello","what","is","your","hello","name","?","may","is","hello"};
    biggies(words,4);
    return 0;
}