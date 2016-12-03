//
// Created by Xiyun on 2016/12/3.
//

class HasPtr {
public:
    HasPtr(const std::string& s = std::string()) :
            ps(new std::string(s), i(0)) { }

    ~HasPtr() {
        delete ps;
    }
private:
    std::string *ps;
    int i;
};
