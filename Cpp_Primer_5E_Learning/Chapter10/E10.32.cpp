//
// Created by Xiyun on 2016/10/23.
//
#include <iostream>
#include <vector>
#include <numeric>
#include "../include/Sales_item.h"

using namespace std;

int main()
{
    //使用vector 保存交易记录
    //使用sort 和10.3.1中的compareIsbn函数来排序交易记录
    //使用find 和accumulate求和
    Sales_item item;
    vector<Sales_item> total;
    istream_iterator<Sales_item> in(cin),eof;

    // input
    while(in != eof)
        total.push_back(*in++);
    //sort
    sort(total.begin(),total.end(),
            [](const Sales_item &s1, const Sales_item &s2)
                {return s1.isbn() == s2.isbn();});
    for(auto beg = total.begin(),end = beg;beg!=total.end();)
    {
        end = find_if(beg,total.end(),
                        [=](const Sales_item &s){return s.isbn() != beg->isbn();});
        cout << accumulate(beg,end,Sales_item(beg->isbn())) << endl;
    }
    return 0;
}
