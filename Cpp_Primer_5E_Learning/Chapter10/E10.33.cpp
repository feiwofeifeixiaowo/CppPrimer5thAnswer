//
// Created by Xiyun on 2016/10/23.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void someMethod(string input_filename,string odd_filename,string even_filename)
{
    //没必要缓存下来
//    vector<int> vec;
    ifstream ifs(input_filename);
    istream_iterator<int> in(ifs),eof;

//    copy(in,eof,back_inserter(vec));

    ofstream odd_ofs(odd_filename);
    ofstream even_ofs(even_filename);
    ostream_iterator<int> odd_out(odd_ofs,"\n");
    ostream_iterator<int> even_out(even_ofs," ");

    for_each(in,eof,
                [](const int i){cout << i << "\n";});
    for_each(in,eof,
                [&odd_out, &even_out](const int i)
                    {*(i & 0x1 ? odd_out : even_out)++ = i;});

}

int main()
{
    someMethod("number.txt","odd.txt","even.txt");
    return 0;
}
