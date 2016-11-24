// Copyright ® xy

#include <iostream>
#include <limits>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::numeric_limits;

int foo(int i, int j) {
    return i + j;
}

int main() {
    cout << "Hello, World!" << endl;
    int i = 2;
    //cout << "result is: " << ((i++) + (++i)) << endl;
    //cout << foo(i++, ++i);    // UB
    // test strtold()
//    auto a(123456789098765432123456789009876543212345678901234567890123456);
    cout << "ull: " << numeric_limits<unsigned long long>::max() << endl;
    string s(1000,'8');
    char* end;
    long double ret = strtold(s.c_str(), &end);
//    cout << a << endl;
    cout << "str: " << s << endl;
    cout << "ret: " << ret << endl;
    return 0;
}

