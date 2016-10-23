//
// Created by Xiyun on 2016/10/23.
//
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
    vector<string> svec;
    ifstream ifs("input.txt");
    istream_iterator<string> str_in(ifs),eof;

    copy(str_in,eof,back_inserter(svec));
    copy(svec.cbegin(),svec.cend(),ostream_iterator<string>(cout, "\n"));
//    while(str_in != eof)
//    {
//        svec.push_back(*str_in++);
//    }
//
//    for_each(svec.cbegin(),svec.cend(),
//                [](const string &s){cout << s << "\t";});
//    cout << endl;s
    return 0;
}
