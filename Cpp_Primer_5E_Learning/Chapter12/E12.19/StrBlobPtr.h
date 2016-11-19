//
// Created by Xiyun on 2016/11/19.
//

#ifndef CPP_PRIMER_5E_LEARNING_STRBLOBPTR_H
#define CPP_PRIMER_5E_LEARNING_STRBLOBPTR_H

//for shared_ptr
#include <memory>
#include <string>
#include <vector>
//for out_of_range error
#include <exception>
#include <initializer_list>

class StrBlobPtr;

class StrBlob {
public:
    //friend member
    friend class StrBlobPtr;
    StrBlobPtr begin() { return StrBlobPtr(*this);}
    StrBlobPtr end() {
        auto ret = StrBlobPtr(*this, data->size());
        return ret;
    }

    using size_type = std::string::size_type;
    //构造函数
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
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

private:
    std::shared_ptr<std::vector<std::string>>
            check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;//数组中当前的位置
};

std::shared_ptr<std::vector<std::string>>
    StrBlobPtr::check(std::size_t sz, const std::string &msg) const {
    auto ret = wptr.lock();// vector存在，返回shared_ptr 的对象
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if(i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}
#endif //CPP_PRIMER_5E_LEARNING_STRBLOBPTR_H
