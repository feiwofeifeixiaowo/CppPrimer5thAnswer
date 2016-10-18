//
// Created by Xiyun on 2016/10/18.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename Sequence>
auto  println(Sequence &seq) -> std::ostream&
{
    for(auto const &elem : seq)
        cout << elem << "\n";
    return cout << endl;
}

bool isShorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

int main()
{
    vector<string> words{"fox","jumps","over","quick","red","red","show","the","turtle"};
    stable_sort(words.begin(),words.end(),isShorter);
    elimDups(words);
    println(words);
    return 0;
}