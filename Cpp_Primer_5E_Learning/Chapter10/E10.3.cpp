//
// Created by Xiyun on 2016/10/11.
//
#include <iostream>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> ivec{12,3,3,4,5,6,77,8};
    int sum = accumulate(ivec.cbegin(),ivec.cend(),0);
    cout << "sum of value in vector is :  " << sum << endl;
    vector<string> svec{"Hello","world","what","day"};
//    string resultSum = accumulate(svec.cbegin(),svec.cend(),"");//error: assigning to 'const char *' from incompatible type 'std::__1::basic_string<char>'
    string resultSum = accumulate(svec.cbegin(),svec.cend(),string(""));//操作类似于  += 操作  "" + svec[0] + svec[1]
    cout << resultSum<< endl;
    return 0;
}
