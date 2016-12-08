//
// Created by Xiyun on 2016/12/7.
//

#include "E13.31.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::to_string;

int main (int argc, char* argv[]) {
    vector<HasPtr> vh;
    int n = atoi(argv[1]);
    for (int i = 0; i < n; i++)
        vh.push_back(to_string(n-i));
    for (auto p : vh)
        cout << *p << " ";
    cout << endl;
    sort(vh.begin(), vh.end());
    for (auto p : vh)
        cout << *p << " ";
    cout << endl;
    return 0;
}