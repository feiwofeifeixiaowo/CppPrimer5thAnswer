//
// Created by Xiyun on 2016/12/5.
//

#ifndef CPPPRIMER5ELEARNING_EMPLOYEE_H
#define CPPPRIMER5ELEARNING_EMPLOYEE_H

#include <string>

class Employee {
public:
//    Employee() = default;
    Employee() {mysn_ = sn_number++;}
    Employee(const std::string& name) : name_(name), mysn_(sn_number++){}
    Employee(Employee& e) {name_ = e.name_; mysn_ = sn_number++;}
    Employee& operator=(Employee& rhs) {name_ = rhs.name_; return *this;}
    int get_mysn() {return mysn_;}
    const std::string& get_name() { return name_;}
private:
    std::string name_;
    static int sn_number;
    int mysn_;
};
// 类的static 成员要在类外初始化
int Employee::sn_number = 0;
#endif //CPPPRIMER5ELEARNING_EMPLOYEE_H
