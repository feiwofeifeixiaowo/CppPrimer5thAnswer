//
// Created by Xiyun on 2016/11/28.
//

#ifndef CPP_PRIMER_5E_LEARNING_QUERYRESULT_H
#define CPP_PRIMER_5E_LEARNING_QUERYRESULT_H

#include <vector>
#include <map>
#include <set>
#include <string>
#include <iostream>

class QueryResult {
public:
    // 输出查询结果
    friend std::ostream& print(std::ostream& os, const QueryResult& qr);
    // 构造函数
    QueryResult() = default;
    QueryResult(std::shared_ptr<std::vector<std::string>>& file_data,
                std::shared_ptr<std::map<std::set<int>>>& line_number_map);
private:
    // 保存整个输入文件，每行保存到一个string中
    std::shared_ptr<std::vector<std::string>> file_data_;
    // 将每个单词与其出现的行号set关联
    std::shared_ptr<std::map<std::set<int>>> line_number_map_;
};


#endif //CPP_PRIMER_5E_LEARNING_QUERYRESULT_H
