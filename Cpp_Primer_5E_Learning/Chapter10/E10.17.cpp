//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>
#include <vector>
#include "Sales_data.h"

using namespace std;

//old version
bool compareIsbn(const Sales_data &s1,const Sales_data &s2)
{
    return (s1.isbn().size() < s2.isbn().size());
}

int main()
{
    vector<Sales_data> sales;
    auto s1 = Sales_data("100-123312a");
    auto s2 = Sales_data("101-123312aaa");
    auto s3 = Sales_data("102-123312acv");
    auto s4 = Sales_data("103-123312ssnsns");
    sales.push_back(s4);
    sales.push_back(s2);
    sales.push_back(s1);
    sales.push_back(s3);

    stable_sort(sales.begin(),sales.end(),
                [](const Sales_data &s1, const Sales_data &s2)
                {return s1.isbn().size() < s2.isbn().size();});
    for_each(sales.cbegin(),sales.cend(),
            [](const Sales_data &s){cout << s.isbn() << "\t";});
    cout << endl;
    return 0;
}
