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
    cout << __func__ << endl;

    string *ps1 = new string;  //默认初始化为空str
    string *ps2 = new string();//值初始化为空str

//    int *pi1 = new int;   //默认初始化，*pi1的值未定义
//    int *pi2 = new int(); //值初始化，  *pi2的值为0
    auto p_a = new auto(12);// c++ 11 新特性
    cout << *p_a << endl;


    //动态分配的const 对象
    const int *pci = new const int(1024);//指向const的指针
    const string *pcs = new const string;//分配一个空的str并返回const 指针

    unique_ptr<double> pd1;
    unique_ptr<int > pi1(new int(42));
    unique_ptr<int>  pi2 = make_unique<int >(42);

    cout << "*pi2 : " <<  *pi2 << endl;
    // unique_ptr 不支持普通的拷贝或赋值操作,但是可以用 p2.reset(p3.release()) // release 是放弃指针的使用权，并不会释放内存
    // 必须采用直接初始化的方式
    pi2 = nullptr;

    // error code  E12.16
//    auto cup1 = pi2;


    return 0;

}

