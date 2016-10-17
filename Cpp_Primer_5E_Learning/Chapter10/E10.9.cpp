//
// Created by Xiyun on 2016/10/17.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print(vector<string> &svec){
    for(auto s:svec)
        cout << s << "\t";
    cout << endl;
}

void elimDups(vector<string> &words){
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    print(words);
    words.erase(end_unique,words.end());
    print(words);
}

int main(){

    vector<string> words;
    string word;
    while(cin >> word){
        words.push_back(word);
        if(words.size() ==5)
            break;
    }

    elimDups(words);

    return 0;
}
