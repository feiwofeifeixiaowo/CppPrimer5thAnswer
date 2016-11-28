//
// Created by Xiyun on 2016/11/28.
// CopyRight® xy
// Cpp primer chapter12 文本查询程序

#ifndef CPP_PRIMER_5E_LEARNING_TEXTQUERY_H
#define CPP_PRIMER_5E_LEARNING_TEXTQUERY_H

#include "QueryResult.h"
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <fstream>

class TextQuery {
public:
    // 构造函数
    TextQuery() = default;
    TextQuery(std::ifstream& infile);
    QueryResult& query(const std::string& text) const;
private:
    // 保存整个输入文件，每行保存到一个string中
    std::shared_ptr<std::vector<std::string>> file_data_;
    // 将每个单词与其出现的行号set关联
    std::shared_ptr<std::map<std::set<int>>> line_number_map_;
};

#endif //CPP_PRIMER_5E_LEARNING_TEXTQUERY_H
