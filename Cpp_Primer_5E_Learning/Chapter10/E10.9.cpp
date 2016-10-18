//
// Created by Xiyun on 2016/10/17.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template<typename Sequence>
auto println(Sequence const& seq) -> std::ostream&
{
    for(auto const& elem : seq)
        cout << elem << "\t";
    return cout << endl;
}

void print(vector<string> &svec){
    for(auto &s:svec)
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

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

void testCustomizing(vector<string> &words){
    elimDups(words);
    stable_sort(words.begin(),words.end(),isShorter);//使用自定义比较函数进行排序
    println(words);//print vector
}

int main(){

    vector<string> words{"fox","jumps","over","quick","red","red","show","the","turtle"};
//    string word;
//    while(cin >> word){
//        words.push_back(word);
//        if(words.size() ==5)
//            break;
//    }
//    elimDups(words);
    testCustomizing(words);
    return 0;
}
