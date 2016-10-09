//
// Created by Xi on 2016/3/10.
//

#include <iostream>
#include <string>

using namespace std;

int rangeForTest();
int countPunctCnt();
int strToupperTest();
int strToupperTest2();
int DecToHex();
int changeStrToX();

int main()
{
//    string str("abcdfghi");
//    string str1 = "ahhhahahahahasdadscas";
//    string str2(10,'M');
//
//    for(auto &s : str)
//        s = 'X';
//    cout << "range for version " << str << endl;
//
//    // normal for
//    for (string::size_type i = 0; i < str.size(); ++i)
//    {
//        str[i] = 'X';
//    }
//    cout << "normal for version " << str << endl;
//
//    // while
//    string::size_type j = 0;
//    while(j <= str.size())
//    {
//        str[j] = 'X';
//        j++;
//    }
//    cout <<"while version " << str << endl;

//    rangeForTest();
//    countPunctCnt();
//    strToupperTest();
//    strToupperTest2();
//    DecToHex();

    changeStrToX();

    return 0;
}

//对str中的每个char c 执行输出操作
int rangeForTest()
{
    string str;
    cin >> str;
    for(auto c : str)
        cout << c << endl;
    return 0;
}

int countPunctCnt()
{
    string s("Hell,o Owasda!!!!");
    decltype(s.size()) puntCnt = 0; //string::size_type  机器无关的无符号数
    for(auto c : s)
        if(ispunct(c))
            puntCnt++;
    cout << puntCnt<< endl;
    return 0;
}

int strToupperTest()
{
    string str = "hello,world ?";
    for(auto &c : str)
//        c = toupper(c);
        toupper(c);// toupper() 函数返回对应的大写字母
    cout << "Upper Letter is : " << str << endl;
    return 0;
}

int strToupperTest2()
{
    string str = "some string";
    for (decltype(str.size()) i = 0;  i != str.size() && !isspace(str[i]) ; ++i)
    {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
    return 0;
}

int DecToHex()
{   string hexString = "0123456789ABCDEF";
    cout << "input num to convert: (split with space)" << endl;
    string::size_type n;
    while (cin >> n)
        if(n < hexString.size())
            cout << hexString[n];
    cout << endl;
    return 0;
}

int changeStrToX()
{
    string str = "some string ";

    //range for version
//    for(auto &c: str)
//        c = 'X';
//    cout << str << endl;

    //char version not use ref
//    for(char c : str)
//        c = 'X';
//    cout << str << endl;

    //while  version
//    string::size_type j = 0;
//    while(j < str.size())
//    {
//        str[j] = 'X';
//        j++;
//    }
//    cout << str << endl;

    //normal version
    for (decltype(str.size()) index = 0; index < str.size(); ++index)
    {
        str[index] = 'X';
    }
    cout << str << endl;

}