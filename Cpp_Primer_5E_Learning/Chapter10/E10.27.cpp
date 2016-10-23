//
// Created by Xiyun on 2016/10/23.
//
#include <iostream>
#include <list>
#include <vector>

using namespace std;

// print containers like vector, deque, list, etc.
template<typename Sequence>
auto println(Sequence const& seq) -> std::ostream&
{
    for(auto const& elem : seq)
        cout << elem << "\t";
    return cout << endl;
}

int main()
{
    vector<int> ivec{1,2,2,3,4,2,5,7,8};
    list<int> ilst;
    // unique 重排序列，对相邻的重复元素，通过覆盖他们来进行删除
    unique_copy(ivec.begin(),ivec.end(),back_inserter(ilst));

//    println(ilst);
    for_each(ilst.cbegin(),ilst.cend(),
                [](const int &i){cout << i << "\t";});
    return 0;
}
