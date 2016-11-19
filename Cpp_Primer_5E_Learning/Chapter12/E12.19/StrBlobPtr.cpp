//
// Created by Xiyun on 2016/11/19.
//

#include "StrBlobPtr.h"

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) { }

void StrBlob::check(size_type sz, const std::string &msg) const {
    if(sz >= data->size())
        throw std::out_of_range(msg);
}

std::string& StrBlob::front() {
    check(0,"front on empty StrBlob");
    return data->front();
}

const std::string& StrBlob::front() const {
    check(0,"front on empty StrBlob");
    return data->front();
}

const std::string& StrBlob::back() const {
    check(0,"back on empty StrBlob");
    return data->back();
}

std::string& StrBlob::back() {
    check(0,"back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back() {
    check(0,"pop back on empty StrBlob");
    data->pop_back();
}

// StrBlobPtr impl
std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t sz, const std::string &msg) const {
    auto ret = wptr.lock();// vector存在，返回shared_ptr 的对象
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if(curr >= ret->size())
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