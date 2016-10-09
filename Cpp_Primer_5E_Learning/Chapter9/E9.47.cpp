//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
//    string name("AnnaBelle");
//    auto pos1 = name.find("anna");
//    cout << pos1 << endl;// pos1 is string::npos
//    cout << (pos1==string::npos) << endl;
//
//    string numbers("0123456789"), name1("rd2d2d2");
//    auto pos2 = name1.find_first_of(numbers);
//
//    auto pos3 = name1.find_first_not_of(numbers);
//    cout << pos3 << endl;
    string str("ab2c3d7R4E6");
    string number("0123456789");
    string::size_type pos = 0;
    while((pos = str.find_first_not_of(number,pos))!= string::npos)
    {
        cout << str[pos] << "\t";
        ++pos;
    }
    cout << endl;

    string name ("r2d2");
    string numbers("0123456789");
    cout << numbers.find_first_of(name) << endl;
    return 0;

}
