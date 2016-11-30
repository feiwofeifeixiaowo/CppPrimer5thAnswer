//
// Created by Xiyun on 2016/11/28.
//

#ifndef CPP_PRIMER_5E_LEARNING_QUERYRESULT_H
#define CPP_PRIMER_5E_LEARNING_QUERYRESULT_H

#include <vector>
#include <string>
#include <set>
#include <iostream>
#include <memory>

class QueryResult {
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    using line_no = std::vector<std::string>::size_type;
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f) :
            sought(s), lines(p), file(f) { }
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

std::ostream &print(std::ostream &os, const QueryResult &qr);
#endif //CPP_PRIMER_5E_LEARNING_QUERYRESULT_H
