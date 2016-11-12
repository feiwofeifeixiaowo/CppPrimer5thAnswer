//
// Created by Xi on 2016/3/11.
//

#include <iostream>
#include <vector>

using namespace std;

int IteratorTest();
int IteratorTest2();

int main()
{
    vector<int> ivec {10,11,12,13,14};
    vector<int> ivec2(3,11);
    vector<int> ivec3 = ivec;

//    auto b = ivec.cbegin();
//    auto e = ivec.cend();

    for(auto it = ivec.cbegin(); it != ivec.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    cout << ivec.size() << endl;

//    IteratorTest2();

    return 0;
}

// use iterator to upper the first letter of string s
int IteratorTest()
{
    string s("some string.");
    if(s.begin() != s.end())// 判读是否为空
    {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}
int IteratorTest2()
{
    string s("some string.");

    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}

int IteratorTest3()
{
    vector<int>::iterator i_it;//read write
    vector<int>::const_iterator i_cit;// read
    string::iterator s_it;//read write
    string::const_iterator s_cit;//read

    vector<int> v;
    const vector<int> cv;
    auto v1 = v.begin();// vector<int>::iterator
    auto v2 = cv.begin();// vector<int>::const_iterator

    // cbegin()  返回常量迭代器
    auto it3 = v.cbegin();//  vector<int>::const_iterator

    return 0;
}