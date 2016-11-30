//
// Created by Xiyun on 2016/11/28.
//

#ifndef CPP_PRIMER_5E_LEARNING_TEXTQUERY_H
#define CPP_PRIMER_5E_LEARNING_TEXTQUERY_H


#include <vector>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <fstream>

class QueryResult;
class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    explicit TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string,
             std::shared_ptr<std::set<line_no>>> wm;
};


#endif //CPP_PRIMER_5E_LEARNING_TEXTQUERY_H
