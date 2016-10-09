//
// Created by Xi on 2016/3/10.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    while(cin >> word)
        cout << word << endl;
    return 0;
}

/*
 * int main()
{
    string line;
    while(getline(cin,line))
    {
        if(!line.empty())
            cout << line << endl;
    }
    return 0;
}
 */

int GetLineFromCommandLine()
{
    string line;
    while(getline(cin,line))
        if(!line.empty())
            cout << line << endl;
    return 0;
}

int GetWordFromCommandLine()
{
    string word;
    while(cin >> word)
        cout << word << endl;
    return 0;
}