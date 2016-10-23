//
// Created by Xiyun on 2016/10/24.
//
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

int main()
{
    //E10.34
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    for_each(ivec.crbegin(),ivec.crend(),
             [](const int i){cout << i << "\t";});
    cout << endl;

    //E10.35
    auto end = prev(ivec.cend());
    while(end != ivec.cbegin())
    {
        cout << *end << "\t";
        --end;
    }
    cout << *ivec.cbegin();
    cout << endl;

    //E10.36
    list<int>lst{1,2,3,4,5,6,7,8,0,12,123,3,4,4};
    auto found_0 = find(lst.cbegin(),lst.cend(),0);
    cout << distance(found_0,lst.cend()) << endl;

    //E10.37
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    list<int> dest_lst;

    copy(vec.cbegin()+2, vec.cbegin()+8,front_inserter(dest_lst));

    for_each(dest_lst.cbegin(),dest_lst.cend(),
            [](const int i){cout << i << "\t";});
    return 0;
}
