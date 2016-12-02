//
// Created by Xiyun on 2016/12/2.
//

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& rhs) : ps(new std::string(*rhs.ps)), i(rhs.i) { }
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