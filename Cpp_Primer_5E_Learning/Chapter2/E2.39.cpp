//
// Created by Xi on 2016/3/10.
//
#include <iostream>

struct Foo {

}; // 没有分号   提示error: expected ';' after struct definition

struct Sales_data {
    std::string bookNo;
    double revenue;
    unsigned soldNum;
    double soldPrice;
};

int main()
{
    return 0;
}
