//
// Created by Xiyun on 2016/11/18.
//

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    using IntP = unique_ptr<int>;
//    IntP p0(ix);// int to pointer  error
//    IntP p1(pi);// pi没有使用new 分配内存。编译可以通过，但是p1 离开作用域的时候会执行delete 操作， error for object 0x7fff5066b4f8: pointer being freed was not allocated
//    IntP p2(pi2);//会产生一个空悬指针，当p2离开作用域delete 操作结束后，pi2 这个指针已然指向被销毁的内存。可能会引发异常
//    IntP p3(&ix);// ix 不是由new 分配内存，离开作用域之后 delete操作会出错
    IntP p4(new int(2048));// 推荐方式
//    IntP p5(p2.get());// p2  p5 指向相同对象。两个unique_ptr 指向相同对象，两个指针都离开作用域的时候会导致释放已经释放掉的内存。
    return 0;
}