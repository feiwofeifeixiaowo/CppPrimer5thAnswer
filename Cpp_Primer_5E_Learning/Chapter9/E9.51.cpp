//
// Created by Xiyun on 2016/10/9.
//
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string date1("January 1,1900");
    string date2("1/1/1900");
    string date3("Jan 1 1900");

    string split("/ ,");
    string::size_type sz = 0;
//    string str(date1);
    while(sz <= date1.size())
    {
//        auto index = str.find_first_of(split,sz);
        string word = date1.substr(sz,date1.find_first_of(split,sz));
        cout << "sz: " << sz << endl;
        cout << "word: " << word << endl;
        sz+= (word.size()+1);
        //update str
////        str = date1.substr(sz,date1.size()-1);
//        cout << "str: " << str << endl;
    }
//    cout << date1 << endl;

}
