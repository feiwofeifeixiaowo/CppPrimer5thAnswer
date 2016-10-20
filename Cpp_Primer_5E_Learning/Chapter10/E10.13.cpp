//
// Created by Xiyun on 2016/10/18.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool predict(const string &s1)
{
    return s1.size() >= 5;
}

int main()
{
    string s("abcdefg");
    vector<string> svec{"abcd","asdad","hello","world","whate"};

    auto p_result = partition(svec.begin(),svec.end(),predict);

    for(auto it = svec.cbegin(); it!= p_result;++it)
        cout << *it << "\t";
    cout << endl;
    return 0;
}
