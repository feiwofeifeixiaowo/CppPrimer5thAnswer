//
// Created by Xiyun on 2016/12/5.
//

#ifndef CPPPRIMER5ELEARNING_MYSTRBLOB_H
#define CPPPRIMER5ELEARNING_MYSTRBLOB_H

#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <exception>

class StrBlobPtr;

class StrBlob {
public:
    //friend member
    friend class StrBlobPtr;

    StrBlobPtr begin();
    StrBlobPtr end();

    using size_type = std::string::size_type;
    //构造函数
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    // 拷贝控制
    StrBlob(StrBlob&);
    StrBlob& operator=(StrBlob& rhs);
    //状态
    bool empty() const {return data->empty();}
    size_type size() const { return data->size();}
    //元素访问
    std::string& front();
    std::string& back();
    //const 版本元素访问
    const std::string& front() const;
    const std::string& back() const;
    //添加删除元素
    void push_back(const std::string& t) {data->push_back(t);}
    void pop_back();
private:
    std::shared_ptr<std::vector<std::string>> data;
    // 检查给定索引是否在合法范围内
    void check(size_type sz, const std::string& msg) const ;
};

StrBlob::StrBlob(StrBlob& s) {
    data = std::make_shared<std::vector<std::string>>(*s.data);
//    auto tmp_vec = *(s.data);
//    data.reset(new std::vector<std::string>(tmp_vec));
}
StrBlob& StrBlob::operator=(StrBlob &rhs) {
    data = std::make_shared<std::vector<std::string>>(*rhs.data);
//    auto tmp_vec = *(rhs.data);
//    data.reset(new std::vector<std::string>(tmp_vec));
    return *this;
}
//StrBlob 的伴随指针类
class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob& a, size_t sz = 0) :
            wptr(a.data), curr(sz) {}

    // 解引用
    std::string& deref() const;
    // 递增
    StrBlobPtr& incr();
    // compare
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr;}

private:
    std::shared_ptr<std::vector<std::string>>
    check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;//数组中当前的位置
};
#endif //CPPPRIMER5ELEARNING_MYSTRBLOB_H
