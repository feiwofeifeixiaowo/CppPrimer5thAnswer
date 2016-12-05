//
// Created by Xiyun on 2016/12/5.
//

#include "Employee.h"
#include <iostream>

using std::cout;
using std::endl;
int main () {
    Employee e("e1");
    Employee e1("e2");
    cout << e.get_mysn() << endl;
    cout << e1.get_mysn() << endl;
    return 0;
}