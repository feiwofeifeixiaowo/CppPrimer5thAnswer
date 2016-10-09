//
// Created by Xi on 2016/3/10.
//

#include <iostream>
#include <string>

using namespace std;

int punctuationRemoved();

int main()
{
//    string str,str2;
//    cout << " please input a string with some symbol:"<< endl;
//    cin >> str;
//    for(auto &s : str)
//        if(!ispunct(s))
//            str2 += s;
//    cout << str2 << endl;
    punctuationRemoved();
    return 0;
}

int punctuationRemoved()
{
    string words;
    string result;

    cin >> words;
    for(auto &c : words)
        if(!ispunct(c))
            result += c;
    cout << result <<endl;

    return 0;
}