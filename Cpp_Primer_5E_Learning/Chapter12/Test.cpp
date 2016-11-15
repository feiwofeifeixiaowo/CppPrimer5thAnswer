//
// Created by X on 2016/11/14 0014.
//

#include <iostream>
#include <string>
#include <list>
#include <memory>

using namespace std;

int main()
{
    //() 中传递的参数必须与string的某个构造函数匹配
    shared_ptr<string> p1 = make_shared<string>();
    shared_ptr<list<int>> p2;
    shared_ptr<int> p3 = make_shared<int>();
    auto p4 = make_shared<string>("HI");
    if(p1 && p1->empty())
        *p1 = "hi";
    cout << *p1 << endl;
    cout << "test" << endl;
    return 0;

}
