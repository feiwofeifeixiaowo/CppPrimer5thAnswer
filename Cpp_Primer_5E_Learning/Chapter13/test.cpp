//
// Created by Xiyun on 2016/12/1.
//

#include <iostream>

// test for copy control
class Foo {
public:
    Foo();
    Foo(const Foo&);
};