//
// Created by Xiyun on 2016/11/16.
//

#include "StrBlob.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    StrBlob sb{"hello", "world", "StrBlob"};
    const StrBlob csb{"hello", "world", "Xiyun"};
    cout << csb.front() << "\t" << csb.back() << endl;
    sb.back() = "back is me";
    cout << sb.front() << "\t" << sb.back() << endl;
    return 0;
}

//E12.4 using size_type = std::string::size_type;
//beacuse size_type is a unsigned type, therefore when sz got a negative number , the compiler convert it into positive number.
