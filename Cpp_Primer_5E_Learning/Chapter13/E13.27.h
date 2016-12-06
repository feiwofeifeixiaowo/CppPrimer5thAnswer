//
// Created by Xiyun on 2016/12/6.
//

#ifndef CPPPRIMER5ELEARNING_E13_27_H
#define CPPPRIMER5ELEARNING_E13_27_H
class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
    HasPtr(const HasPtr& p) :
            ps(p.ps), i(p.i), use(p.use) {++*use;}
    HasPtr& operator=(const HasPtr& rhs);
    ~HasPtr();
private:
    std::string *ps;
    int i;
    // 引用计数
    std::size_t *use;
};

HasPtr::~HasPtr() {
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}
HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    ++*rhs.use;
    if (--*use == 0) {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}
#endif //CPPPRIMER5ELEARNING_E13_27_H
