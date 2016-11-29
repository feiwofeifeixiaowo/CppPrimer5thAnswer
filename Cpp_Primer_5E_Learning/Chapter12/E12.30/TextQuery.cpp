//
// Created by Xiyun on 2016/11/28.
//

#include "TextQuery.h"
#include <vector>
#include <string>
#include <sstream>

using std::vector;
using std::string;
using std::istringstream;

TextQuery::TextQuery(std::ifstream& is) : file(new vector<string>) {
    string text;
    while (getline(is, text)) {
        file->push_back(text);
        int n = file->size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}

