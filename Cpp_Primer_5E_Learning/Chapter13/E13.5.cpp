//
// Created by Xiyun on 2016/12/2.
//

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& rhs) : ps(new std::string(*rhs.ps)), i(rhs.i) { }
    // 因为构造函数使用new，这里负责delete 释放
    // 防止两个不同的对象指向同一个内存，执行深拷贝
    HasPtr& operator=(const HasPtr& rhs) {
        if (this != rhs) {
            std::string *temp_ps = new std::string(*rhs.ps);
            delete ps;
            ps = temp_ps;
            i  = rhs.i;
        }
        return *this;
    }
private:
    std::string *ps;
    int i;
};