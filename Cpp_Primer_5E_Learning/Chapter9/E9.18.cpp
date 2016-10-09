//
// Created by Xiyun on 2016/9/27.
//
#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;
int  testGetElement();

int main()
{
    /*
     * string word;

    deque<string> deque1;

    while(cin >> word){
        deque1.push_back(word);
    }

    for(auto d:deque1){
        cout << d << " ";
    }
    cout << endl;
*/
    testGetElement();
    return 0;
}

int  testGetElement()
{
    vector<int> ivec{1,2,3,4,5};
    if(!ivec.empty()) {
        auto val = *ivec.begin(), &val2 = ivec.front();
        auto val3 = ivec.back();//forward_list not support
        val2 = 100;
        cout << val << val2 << endl;
        cout << val3 << endl;
    }

    return 0;
}
