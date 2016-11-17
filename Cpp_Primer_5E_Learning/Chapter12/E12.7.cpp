//
// Created by Xiyun on 2016/11/17.
//

//
// Created by Xiyun on 2016/11/17.
//
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

auto ret_vec() -> shared_ptr<vector<int>>
{
    shared_ptr<vector<int>>  sp = make_shared<vector<int>>();
    return sp;
}

auto print(shared_ptr<vector<int>> ptr) ->void
{
    for (vector<int>::size_type i = 0; i< ptr->size(); ++i)
        cout << (*ptr)[i] << "\t";
    cout << endl;
}
int main ()
{
    auto pivec = ret_vec();
    int i;
    while(cin >> i)
    {
        pivec->push_back(i);
        if(pivec->size() > 4)
            break;
    }
    print(pivec);

    cout << pivec.use_count();
    return 0;
}

//E12.8

// p 转换成bool之后，意味着 p指向的内存无法被释放
// p 执行默认初始化，内置类型默认初始化的值未定义
bool b() {
    int *p = new int;
    return p;
}

