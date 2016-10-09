//
// Created by Xiyun on 2016/9/27.
//
#include <iostream>
#include <list>
#include <deque>
#include <string>
#include <vector>

using namespace std;

int main()
{
    list<int> list1{1,2,3,4,5,6,7,8,9,10};

    deque<int> odd;

    deque<int> even;

    for(auto l:list1){
        if(l==0)
            odd.push_back(l);

        if((l%2)==0)
            even.push_back(l);
        else
            odd.push_back(l);
    }

    for(auto o:odd)
        cout << o << " ";
    cout << endl;

    for(auto e:even)
        cout << e << " ";
    cout << endl;
    vector<string> svecTest;
    cout << svecTest[0];// runtime error don't have any element in svecTest
    cout << svecTest.at(0);//  got out_of_range error
    return 0;
}
