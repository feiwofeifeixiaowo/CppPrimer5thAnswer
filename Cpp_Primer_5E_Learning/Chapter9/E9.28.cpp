//
// Created by Xiyun on 2016/9/29.
//
#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void insertStrToForwardlist(forward_list<string> &flst,string const& index,string const& value ){
    auto prev = flst.before_begin();
    for(auto curr = flst.begin(); curr!=flst.end();++curr,++prev){
       if(*curr== index){
           flst.insert_after(curr,value);
           return;
       }

    }
    flst.insert_after(prev,value);

}

int main()
{
    forward_list<string> flst{"hel1lo","word","test"};
    string index ("hello");
    string value ("whami");
    insertStrToForwardlist(flst,index,value);
    for(auto l:flst)
        cout << l << " ";
    cout << endl;
    return 0;
}
