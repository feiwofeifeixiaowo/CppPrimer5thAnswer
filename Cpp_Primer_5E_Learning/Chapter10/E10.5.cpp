//
// Created by Xiyun on 2016/10/12.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
//    vector<string> svec{"hello","world"};
//    list<const char*> clist{"hello","world","hi"};
//    auto result = equal(svec.cbegin(),svec.cend(),clist.cbegin());// 这种情况也是相等的。
//    cout << result << endl;

    //E10.5
    list<const char*> roster1{"hello","world"};
    list<const char*> roster2{"hello","wowrld","hih"};
    auto result = equal(roster1.cbegin(),roster1.cend(),roster2.cbegin());
    cout << result << endl;
    return 0;
}


