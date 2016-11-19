//
// Created by Xiyun on 2016/11/19.
//

#include "ConstStrBlobPtr.h"

using namespace std;

MyStrBlob::MyStrBlob() : data(make_shared<vector<string>>()) { }

MyStrBlob::MyStrBlob(std::initializer_list<std::string> il) : data(make_shared<vector<string>>(il)) { }

ConstStrBlobPtr MyStrBlob::begin() const {
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr MyStrBlob::end() const {
    auto ret = ConstStrBlobPtr(*this, data->size());
    return ret;
}

void MyStrBlob::check(size_type sz, const std::string &msg) const {
    if(sz >= data->size())
        throw out_of_range(msg);
}

std::string& MyStrBlob::front() {
    check(0,"front on empty StrBlob");
    return data->front();
}

const std::string& MyStrBlob::front() const {
    check(0,"front on empty StrBlob");
    return data->front();
}

std::string& MyStrBlob::back() {
    check(0,"back on empty StrBlob");
    return data->back();
}

const std::string& MyStrBlob::back() const {
    check(0,"back on empty StrBlob");
    return data->back();
}

void MyStrBlob::pop_back() {
    check(0,"pop back on empty StrBlob");
    data->pop_back();
}

// ConstStrBlobPtr
shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t sz, const string &msg) const {
    auto ret = wptr.lock();
    if(!ret)
        throw runtime_error("unbound StrBlobPtr");
    if(sz >= ret->size())
        throw out_of_range(msg);
    return ret;
}

string& ConstStrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

ConstStrBlobPtr& ConstStrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}
