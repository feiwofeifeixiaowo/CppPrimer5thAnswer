//
// Created by Xiyun on 2016/11/28.
//

#include "TextQuery.h"
#include "QueryResult.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void runQueries(ifstream& infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main () {
    string file_name = "/Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/data/book.txt";
    ifstream in(file_name);
    runQueries(in);
    return 0;
}