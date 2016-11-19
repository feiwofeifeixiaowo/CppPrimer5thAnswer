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

class StrBlobPtr {
// TODO
};


#endif //CPP_PRIMER_5E_LEARNING_STRBLOBPTR_H
