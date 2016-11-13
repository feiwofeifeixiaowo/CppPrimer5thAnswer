//
// Created by Xiyun on 2016/11/13.
//

#ifndef CPP_PRIMER_5E_LEARNING_BLOB_H
#define CPP_PRIMER_5E_LEARNING_BLOB_H

#include <vector>
#include <memory>

template <typename T> class Blob {
public:
    // 类型别名
    using size_type  = std::vector<T>::size_type;

    using value_type = T;

    //构造函数
    Blob(std::initializer_list <T> il);

    Blob();

    //析构函数
    ~Blob();

    //返回元素数量
    size_type size() const { return data->size(); }

    bool empty() const { return data->empty(); }

    //添加和删除元素
    void push_back(const value_type& v) { data->push_back(v); }

    void pop_back();

    //移动版本的添加元素
    void push_back(value_type&& v) {data->push_back(std::move(v));}

    //元素访问
    value_type& operator[] (size_type i);

    value_type& back();

    value_type& front();

    const value_type& operator[] (size_type i) const;

    const value_type& back() const;

    const value_type& front() const;
private:
    //私有成员
    std::shared_ptr<std::vector<T>> data;

    //若data[i] 不合法，抛出一个异常
    void check(size_type i, const std::string& msg) const;
};

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il) :
        data(std::make_shared<std::vector<T>>(il)){}

template <typename T>
Blob<T>::Blob() :
        data(std::make_shared<std::vector<T>>()){}

template <typename T>
void Blob<T>::check(size_type i, const std::string &msg) const {
    if(i > data->size()){
        throw std::out_of_range(msg);
    }
}

template <typename T>
void Blob<T>::pop_back() {
    check(0,"pop_back on empty Blob");
    data->pop_back();
}

template <typename T>
value_type& Blob<T>::back() {
    check(0,"back on empty Blob");
    return data->back();
}

template <typename T>
const value_type& Blob<T>::back() const {
    check(0,"back on empty Blob");
    return data->back();
}

template <typename T>
const value_type& Blob<T>::front() const {
    check(0,"front on empty Blob");
    return data->front();
}

template <typename T>
value_type& Blob<T>::front() {
    check(0,"front on empty Blob");
    return data->front();
}

template <typename T>
value_type& Blob<T>::operator[](size_type i) {
    check(i,"subscript out of range");
    return (*data)[i];
}

template <typename T>
const value_type& Blob<T>::operator[](_Up i) const {
    check(i,"subscript out of range");
    return (*data)[i];
}

#endif //CPP_PRIMER_5E_LEARNING_BLOB_H
