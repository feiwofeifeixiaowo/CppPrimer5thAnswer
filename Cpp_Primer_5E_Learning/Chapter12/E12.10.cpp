//
// Created by Xiyun on 2016/11/17.
//
#include <iostream>
#include <memory>

using namespace std;

void process (shared_ptr<int> ptr)
{
    cout << "inside process " <<ptr.use_count() << endl;
}

int main()
{
    shared_ptr<int> p(new int(42));
    // shared_ptr<int>(p) is a copy of up line new int(42) returned
//    process(shared_ptr<int>(p));
    process(p);
    cout << p.use_count() << endl;
    auto q = p;
    cout << p.use_count() << endl;
    cout << *p << endl;

    return 0;
}