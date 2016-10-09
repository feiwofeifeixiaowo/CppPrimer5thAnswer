//
// Created by Xiyun on 2016/10/9.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1 ("pi = 3.14");
    double d = stod(s1.substr(s1.find_first_of("0123456789.+-")));
    cout << d << endl;

    //E9.50
    vector<string> svec{"12.5","3123","23.5"};
    double sum =0.0;
    for(auto s:svec)
    {
        auto d = stod(s);
        sum += d;
    }
    cout << sum << endl;
}
