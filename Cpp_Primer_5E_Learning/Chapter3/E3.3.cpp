//
// Created by Xi on 2016/3/10.
//

#include <iostream>
#include <string>
using namespace std;

/**
 * string  类的输入运算符是除去string 前的全部空格,从第一个非空格开始到第二个空格（string 类的读入是按照空格来分割的）
 * getline 函数则是包含一整行的数据,是按照 \n 换行符来分割的.
 * getline(is,s,delim) 是按照指定的 delim 来分割的.
 *
 * For code like is >> s, input is separated by whitespaces while reading into string s.
 * For code like getline(is, s) input is separated by newline \n while reading into string s. Other whitespaces are ignored.
 * For code like getline(is, s, delim)input is separated by delim while reading into string s. All whitespaces are ignored.

 */
int testGetline();

int main()
{
    string word, line;
    cout << "请选择读取字符串的方式： 1 表示逐词读取，2表示整行读取" << endl;
    char ch;
    cin >> ch;
    if(ch == '1')
    {
        cout << "请输入字符串： Welcome to C++ family!  " << endl;
        cin >> word;
        cout << "系统读取的有效字符串是：" << endl;
        cout << word <<endl;
        return 0;
    }

    // 清空缓冲区
    cin.clear();
    cin.sync();
    getchar();
    if(ch == '2')
    {
        cout << "请输入字符串:     Welcome to C++ family!" << endl;
        getline(cin,line);
        cout << "系统读取的有效字符串是：" << endl;
        cout << line << endl;
        return 0;
    }
    cout << "您的输入有误！" << endl;
    return -1;

//    testGetline();
}

int testGetline()
{
    string line;
    cout << "请输入字符串:     Welcome to C++ family!" << endl;
    getline(cin,line);
    cout << "系统读取的有效字符串是：" << endl;
    cout << line << endl;
    return 0;
}