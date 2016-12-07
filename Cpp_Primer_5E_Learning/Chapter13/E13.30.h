//
// Created by Xiyun on 2016/12/7.
//

#ifndef CPPPRIMER5ELEARNING_E13_30_H
#define CPPPRIMER5ELEARNING_E13_30_H

#include <string>
#include <iostream>

class HasPtr {
public:
    friend void swap(HasPtr&, HasPtr&);
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& p) :
            ps(new std::string(*p.ps)), i(p.i) { }
    HasPtr& operator=(const HasPtr&);
    ~HasPtr() {delete ps;}
private:
    std::string *ps;
    int           i;
};
inline void HasPtr::swap(HasPtr& lhs, HasPtr& rhs) {
    using std::swap;
    cout << "交换" << *lhs.ps << "和" << *rhs.ps << endl;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(const HasPtr&p) {
    auto tmp = new std::string(*p.ps);
    delete ps;
    ps = tmp;
    i = p.i;
    return *this;
}
#endif //CPPPRIMER5ELEARNING_E13_30_H
