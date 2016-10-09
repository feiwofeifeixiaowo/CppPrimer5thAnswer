//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> svec{"hello","word","asaa","oeoeoeoeoe","as","denesdefnm"};
    string ascender("fhklbd");
    string descender("yqpgj");

    vector<string> result;
    auto pos = string::npos;
    string longest_word;
    for(auto s:svec)
    {
        if ((s.find_first_of(ascender) == pos) && (s.find_first_of(descender) == pos) && s.size() > longest_word.size())
        {
//            result.push_back(s);
            longest_word = s;
//            cout << s << endl;
        }
    }

    cout << longest_word << endl;
    return 0;
}
