//
// Created by Xiyun on 2016/12/7.
//

#ifndef CPPPRIMER5ELEARNING_MESSAGE_H
#define CPPPRIMER5ELEARNING_MESSAGE_H

#include <string>

class Folder;
class Message {
    friend class Folder;
public:
    // folders 被隐式的初始化为空set
    explicit Message(const std::string& str = "") :
            contents(str) { }
    // 拷贝控制成员
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // 从给定Folder集合中添加删除本Message
    void save(Folder&);
    void remove(Folder&);
private:
    // 实际消息文本
    std::string contents;
    // 包含本Message的Folder
    std::set<Folder*> folders;
    // 将本msg 添加到指向参数的Folder
    void add_to_Folders(const Message&);
    // 从folders中的每个Folder中删除本msg
    void remove_from_Folders();
};

#endif //CPPPRIMER5ELEARNING_MESSAGE_H
