//
// Created by Xiyun on 2016/9/29.
//
#include <iostream>
#include <forward_list>

using namespace std;

int main()
{   forward_list<int> flst{1,2,3,4,5,6,7,8,9};
    auto prev = flst.before_begin();
    auto it = flst.begin();
    while (it!=flst.end()){
        if(*it & 0x1)
            it = flst.erase_after(prev);
        else{
            ++prev;//prev =  it;
            ++it;
        }

    }

    for(auto l:flst)
        cout << l << " ";
    return 0;
}
