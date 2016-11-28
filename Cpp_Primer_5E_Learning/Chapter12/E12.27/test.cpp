//
// Created by Xiyun on 2016/11/28.
//

#include "TextQuery.h"
#include "QueryResult.h"
#include <fstream>
#include <string>

using std::ifstream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main () {
    ifstream infile("/path/to/text");
    runQueries(infile);
    return 0;
}