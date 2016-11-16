//
// Created by Xiyun on 2016/11/16.
//

#ifndef CPP_PRIMER_5E_LEARNING_STRBLOB_H
#define CPP_PRIMER_5E_LEARNING_STRBLOB_H

#include <memory>
#include <string>
#include <vector>

class StrBlob {
public:
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
#endif //CPP_PRIMER_5E_LEARNING_STRBLOB_H

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) { }

void StrBlob::check(size_type sz, const std::string &msg) const {
    if(sz > data->size())
        throw out_of_range(msg);
}

std::string& StrBlob::front() {
    return data->front();
}

const std::string& StrBlob::front() const {
    return data->front();
}

const std::string& StrBlob::back() const {
    return data->back();
}

std::string& StrBlob::back() {
    return data->back();
}

void StrBlob::pop_back() {
    data->pop_back();
}