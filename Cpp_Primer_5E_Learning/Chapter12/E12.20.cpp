//
// Created by Xiyun on 2016/11/19.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include "E12.19/StrBlobPtr.h"
#include <string>

int main()
{
    // 使用绝对路径
    std::ifstream ifs("/Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/data/book.txt");
    StrBlob blob;
    if(ifs)
    {
        for(std::string str; getline(ifs, str);)
        {
            blob.push_back(str);
            std::cout << str << std::endl;
        }
    }
    else
    {
        std::cout << "no such file" << std::endl;
        return -1;
    }


    for(StrBlobPtr pbeg = blob.begin(), pend = blob.end(); pbeg != pend; pbeg.incr())
    {
        std::cout<< pbeg.deref() << std::endl;
    }

//    std::ifstream in("../data/book.txt");
//    std::string line;
//    if(in)
//    {
//        while (getline(in, line)){
//            std::cout << line << std::endl;
//        }
//    }
//    else
//    {
//        std::cout << "no such file" << std::endl;
//    }
    return 0;
}