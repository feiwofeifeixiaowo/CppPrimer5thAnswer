//
// Created by Xiyun on 2016/12/4.
//
#include <iostream>
#include <random>

class numbered {
public:
    numbered() {
        std::random_device r;
        std::default_random_engine e1(r());
        std::uniform_int_distribution<int> uniform_dist(1, 6);
        int rand = uniform_dist(e1);
        mysn = std::string("random->" + std::to_string(rand));
    }
    std::string mysn;
};

void f(numbered s) {std::cout << s.mysn << std::endl;}
int main () {
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
    return 0;
}
