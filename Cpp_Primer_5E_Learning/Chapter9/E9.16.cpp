//
// Created by Xiyun on 2016/9/26.
//
#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;
//insert push_front  push_back  区别主要是在性能上、且有的容器不支持push操作
//emplace_front emplace emplace_back 对比 push_front insert push_back 主要是push 是拷贝，而emplace 可以把参数传给容器内对象的构造函数
int main()
{
    list<int> list1{8,9,10};
    vector<int> ivec{1,2,3};
    //push_front() method test     list forward_list deque
    list1.push_front(3);
    deque<int> deque1{1,2,3};
    deque1.push_front(12);
//    cout <<  (ivec < list1) << endl;
    cout << (vector<int> (list1.cbegin(),list1.cend())== ivec ? "true":"false") << endl;
    list1.insert(list1.begin(),1);
    ivec.insert(ivec.end(),10,12);
    ivec.insert(ivec.end(),list1.begin(),list1.end());

    for(auto i: ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
