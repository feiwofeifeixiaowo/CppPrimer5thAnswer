//
// Created by Xiyun on 2016/10/24.
//
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, size_t> word_count;
    string word;
    while(cin >> word)
    {
        ++word_count[word];
        if(word_count.size() > 5)
            break;
    }
    for(const auto &w : word_count)//w is a pair
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
