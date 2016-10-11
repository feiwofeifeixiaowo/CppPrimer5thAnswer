//
// Created by Xiyun on 2016/10/11.
//
#include <algorithm>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string word;
    list<string> list1;
    char flag;
    cout << "input some strings: " << endl;
    while(cin>>word)
    {
        list1.push_back(word);
        cout << "continue?(y/n)" << endl;
        cin >> flag;
//        getchar();
        if(flag=='y' || flag =='Y')
            cout << "please input it again: " << endl;
        else
            break;
    }

    auto result = count(list1.cbegin(),list1.cend(),"hi");
    cout << "count in string list is : " << result << endl;
    return 0;
}

