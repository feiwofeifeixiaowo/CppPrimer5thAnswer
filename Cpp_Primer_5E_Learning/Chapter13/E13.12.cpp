//
// Created by Xiyun on 2016/12/3.
//

// 在下面代码片段中会发生几次析构函数调用
class Sales_data;
bool fcn(const Sales_data* trans, Sales_data accum) {
    Sales_data item1(*trans), item2(accum);
    return item1.isbn() != item2.isbn();
    // 函数返回时，item1  item2 accum 生命周期结束，均调用析构函数
    // trans生命周期也结束，但是不会调用析构函数，因为new 对象的生命周期需要显式delete
}