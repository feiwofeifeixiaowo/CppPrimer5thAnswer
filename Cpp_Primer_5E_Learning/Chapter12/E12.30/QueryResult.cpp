//
// Created by Xiyun on 2016/11/28.
//

#include "QueryResult.h"

std::string make_plural(std::vector<std::string>::size_type cnt,
                        const std::string& s,
                        const std::string& postfix = "s") {
    return cnt > 1 ? s + postfix : s;
}

std::ostream & print(std::ostream& os, const QueryResult& qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time")<< std::endl;
    for (auto num : *qr.lines)
        os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << std::endl;
    return os;
}