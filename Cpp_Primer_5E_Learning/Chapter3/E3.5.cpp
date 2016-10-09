//
// Created by Xi on 2016/3/10.
//
#include <iostream>
#include <string>

using namespace std;


int main()
{
    char cont = 'y';
    string s,result;
    cout << "please input first string :" << endl;
    while(cin >> s)
    {
        result += s + " ";
        cout << "continue?(y/n)" << endl;
        cin >> cont;
        if(cont == 'y')
            cout << "please input agian:" << endl;
        else
            break;
    }
    cout << "The result is " << result << endl;
    return 0;
}

int strPlus2()
{
    char cont = 'y';
    string s,result;
    cout << "input strings: " << endl;
    while(cin >> s)
    {
        result += s + " ";
        cout << "continue?(y/n)" << endl;
        cin >> cont;
        if(cont == 'y')
            cout << "input again:" << endl;
        else
            break;
    }
    cout << "The result is: \n" << result << endl;

    return 0;
}



//int strPlus();
//
//int main()
//{
//    strPlus();
//    return 0;
//}

int strPlus()
{
    string word;
    string total;
    while(cin >> word)
        if(word.size() > 0 )
        {
            total += word;
        }
        else
            break;

    cout << "total words is "<< total << endl;
    return 0;
}