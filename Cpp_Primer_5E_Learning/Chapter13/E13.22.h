//
// Created by Xiyun on 2016/12/5.
//

#ifndef CPPPRIMER5ELEARNING_E13_22_H
#define CPPPRIMER5ELEARNING_E13_22_H

#include <string>

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s), i(0)) { }
    HasPtr(const HasPtr& rhs) :
            ps(new std::string(*rhs.ps)), i(rhs.i) { }
    HasPtr& operator=(const HasPtr&);
    ~HasPtr() {delete ps;}
private:
    std::string *ps;
    int i;
};
HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    // 异常安全的赋值操作：
    // 缓存右值、清空左值、复制元素、返回
    auto newp = new std::string(*rhs.ps);
    delete ps;
    ps = newp;
    i = rhs.i;
    return *this;
}
#endif //CPPPRIMER5ELEARNING_E13_22_H
