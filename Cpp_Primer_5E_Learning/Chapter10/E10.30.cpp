//
// Created by Xiyun on 2016/10/23.
//

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ivec;
    istream_iterator<int> int_it(cin),eof;
    copy(int_it,eof,back_inserter(ivec));
    sort(ivec.begin(),ivec.end());
    copy(ivec.cbegin(),ivec.cend(),ostream_iterator<int>(cout, "\t"));
    return 0;
}