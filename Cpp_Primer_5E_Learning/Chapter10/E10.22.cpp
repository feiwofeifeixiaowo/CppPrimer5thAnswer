//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace std::placeholders;

bool is_big_size(const string &s, size_t size)
{
    return s.size() > size;
}

size_t count_size(vector<string> &words,size_t size)
{
    size_t c = count_if(words.begin(),words.end(),bind(is_big_size,_1,size));
    return c;
}

int main()
{
    vector<string> svec{"hello","world"};
    cout << count_size(svec,4) << endl;
    return 0;
}

