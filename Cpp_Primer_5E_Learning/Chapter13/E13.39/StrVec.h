//
// Created by Xiyun on 2016/12/9.
//

#ifndef CPPPRIMER5ELEARNING_STRVEC_H
#define CPPPRIMER5ELEARNING_STRVEC_H

#include <memory> /* for allocator */
#include <string>
#include <cstddef> /* for size_t */

class StrVec {
public:

    StrVec() :
            elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec);
    ~StrVec();
    void push_back();
    size_t size() const { return first_free - elements; }
    size_t capacity()const { return cap - elements; }
    std::string* begin() const { return elements;}
    std::string* end() const { return first_free;}
    //...
private:
    static std::allocator<std::string> alloc;
    void chk_n_alloc() {
        if (size() == capacity()) reallocate();
    }
    std::pair<std::string*, std::string*> alloc_n_copy (const std::string*, const std::string*);
    void free();
    void reallocate();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};


#endif //CPPPRIMER5ELEARNING_STRVEC_H
