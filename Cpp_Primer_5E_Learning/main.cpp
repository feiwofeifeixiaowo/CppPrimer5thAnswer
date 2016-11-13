#include <iostream>

using namespace std;

int foo(int i, int j)
{
    return i + j;
}

int main() {
    cout << "Hello, World!" << endl;
    int i = 2;

    cout << "result is: " << ((i++) + (++i)) << endl;

    // UB
    cout << foo(i++,++i);
    return 0;
}

