//
// Created by Xiyun on 2016/9/29.
//
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;
using std::advance;

forward_list<int >& do_forward_list(forward_list<int> & list1)
{
    //insert_after()
    //erase_after()
    auto pre_iter = list1.before_begin();
    auto curr_iter = list1.begin();
    while(curr_iter != list1.end())
    {
        if(*curr_iter %2)
        {
            curr_iter = list1.insert_after(pre_iter,*curr_iter);
            advance(curr_iter,2);
            advance(pre_iter,2);
        }
        else
        {
           curr_iter = list1.erase_after(pre_iter);
//            advance(pre_iter,1);//删除之后pre 不动
//            advance(curr_iter,1);//删除之后curr_iter 失效，要让他指向下一个元素
        }
    }
    for(auto l:list1) cout << l << "\t";
    cout << endl;
    return list1;
}
int main()
{
    /*
    //链表的更新不会导致迭代器失效
    list<int> list1{0,1,2,3,4,5,6,7,8,9};
    auto iter = list1.begin();
    while(iter != list1.end())
    {
        if(*iter % 2)
        {
            list1.insert(iter,*iter);
            advance(iter,1);
//            ++iter;
        }
        else
        {
            list1.erase(iter);
            advance(iter,1);
//            ++iter;
        }
    }
//    for(auto l:list1)
//        cout << l << "\t";
//    cout << endl;

     */
    forward_list<int > forward_list1{0,1,2,3,4,5,6,7,8,9};
    auto list_r = do_forward_list(forward_list1);
    for(auto l:list_r) cout << l << endl;
    return 0;
}
