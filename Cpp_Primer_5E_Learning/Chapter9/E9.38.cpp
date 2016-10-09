//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    vector<string> svec;
    string word;
    while(cin >> word)
    {
        svec.push_back(word);
        cout << svec.capacity() << '\tr';
    }
    return 0;
}
