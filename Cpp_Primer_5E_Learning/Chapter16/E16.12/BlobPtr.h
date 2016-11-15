//
// Created by Xiyun on 2016/11/13.
//

#ifndef CPP_PRIMER_5E_LEARNING_BLOBPTR_H
#define CPP_PRIMER_5E_LEARNING_BLOBPTR_H

#include <vector>
#include <memory>
#include "Blob.h"

template <typename> class Blobptr;

template <typename T>
bool operator ==(const Blobptr<T>&, const Blobptr<T>&);

template <typename T>
bool operator <(const Blobptr<T>&, const Blobptr<T>&);

template <typename T> class Blobptr {
public:
    //友元函数
    friend bool operator == <T>
            (const Blobptr<T>& lhs, const Blobptr<T>& rhs);

    friend bool operator < <T>
            (const Blobptr<T> lhs, const Blobptr<T>& rhs);

    //构造函数
    Blobptr() : curr(0){ }
    Blobptr(Blob<T> &a, size_t sz = 0) :
            wptr(a.data), curr(sz) { }

    T& operator *() const
    {
        auto p = check(curr,"dereference past end");
        return (*p)[curr];
    }

    //运算符重载
    //前置
    Blobptr<T>& operator ++();
    Blobptr<T>& operator --();

    //后置
    Blobptr<T>&operator ++(int);
    Blobptr<T>&operator --(int);

private:
    //若检测成功，返回一个指向shared_ptr 的vector
    std::shared_ptr<std::vector<T>>
        check(std::size_t, const std::string&) const ;
    //保存一个weak_ptr 表示底层vector可能被销毁
    std::weak_ptr<std::vector<T>> wptr;
    //数组中的当前位置
    std::size_t curr;
};

//prefix ++
template <typename T>
Blobptr<T>& Blobptr<T>::operator++() {
    check(curr, "increment past end of Blob");
    ++curr;
    return *this;
}

//prefix --
template <typename T>
Blobptr<T>& Blobptr<T>::operator--() {
    --curr;
    check(curr, "decrement past end of Blob");
    return *this;
}

//postfix ++
template <typename T>
Blobptr<T>& Blobptr<T>::operator++(int) {
    Blobptr ret = *this;
    ++*this;
    return ret;
}

//postfix --
template <typename T>
Blobptr<T>& Blobptr<T>::operator--(int) {
    Blobptr ret = *this;
    --*this;
    return ret;
}

//friend func
template <typename T> bool operator ==(const Blobptr<T>& lhs, const Blobptr<T>& rhs) {
    if(lhs.wptr.lock() != rhs.wptr.lock())
        throw runtime_error ("ptrs to different Blobs");
    return lhs.i == rhs.i;
}

template <typename T> bool operator <(const Blobptr<T>& lhs, const Blobptr<T>& rhs) {
    if(lhs.wptr.lock() != rhs.wptr.lock())
        throw runtime_error("ptrs to different Blobs");
    return lhs.i < rhs.i;
}
#endif //CPP_PRIMER_5E_LEARNING_BLOBPTR_H
