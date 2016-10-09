//
// Created by Xi on 2016/3/10.
//
#include <iostream>
#include <string>

using namespace std;

//string 有个size() 函数
int main()
{   string a,b;
    cin >> a >> b;
    if(a.size()==b.size())
        cout << "a b is equal" << endl;
    else if(a.size() > b.size() )
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}
/*
 * int main()
{
    string a , b;
    cin >> a >> b;
    if(a == b)
        cout << "a b is equal" << endl;
    else if(a > b)
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}
*/

int compareStr()
{
    string str1,str2;
    cin >> str1 >> str2;
    if(str1 > str2)
        cout << str1 << endl;
    else if (str1 < str2)
        cout << str2 << endl;
    return 0;
}

int compareStrSize()
{
    string str1,str2;
    cin >> str1 >> str2;
    if(str1.size() > str2.size())
        cout << "str1 > str2" << endl;
    else
        cout << "str1 <= str2 " << endl;
}

