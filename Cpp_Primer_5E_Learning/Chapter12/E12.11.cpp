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
//    process(shared_ptr<int>(p));
//    process(p);

    /**
    * @brief   std::shared_ptr<int>(p.get()) construct a temporary shared_ptr and copy it
    *          to the parameter.However it is not a copy of p. As a result, at end of this
    *          main function p will free the memory that has been freed inside process ().
    *          That's why "double freed or corruption" was generated.
    */
    process(shared_ptr<int>(p.get()));

    cout << p.use_count() << endl;
    auto q = p;
    cout << p.use_count() << endl;
    cout << *p << endl;

    return 0;
    // when main func returned, shared_ptr automatic to delete the memory p point to ,but after process func p's memory has be freed
}