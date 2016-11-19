//
// Created by Xiyun on 2016/11/19.
//

#ifndef CPP_PRIMER_5E_LEARNING_CONSTSTRBLOBPTR_H
#define CPP_PRIMER_5E_LEARNING_CONSTSTRBLOBPTR_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

class ConstStrBlobPtr;

class MyStrBlob {
public:
    //friend member
    friend class ConstStrBlobPtr;

    ConstStrBlobPtr begin() const;
    ConstStrBlobPtr end() const;

    using size_type = std::string::size_type;
    //构造函数
    MyStrBlob();
    MyStrBlob(std::initializer_list<std::string> il);
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

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr() : curr(0) {}
    ConstStrBlobPtr(const MyStrBlob& a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    // 解引用
    std::string& deref() const;
    // 递增
    ConstStrBlobPtr& incr();
    // compare
    bool operator!=(const ConstStrBlobPtr& p) { return p.curr != curr;}

private:
    std::shared_ptr<std::vector<std::string>>
    check(std::size_t, const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;//数组中当前的位置
};


#endif //CPP_PRIMER_5E_LEARNING_CONSTSTRBLOBPTR_H
