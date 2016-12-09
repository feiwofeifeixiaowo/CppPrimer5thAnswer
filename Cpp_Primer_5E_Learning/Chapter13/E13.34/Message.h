//
// Created by Xiyun on 2016/12/7.
//

#ifndef CPPPRIMER5ELEARNING_MESSAGE_H
#define CPPPRIMER5ELEARNING_MESSAGE_H

#include <string>
#include <set>

class Folder;
class Message {
    friend class Folder;
public:
    // folders 被隐式的初始化为空set
    friend void swap(Message& lhs, Message& rhs);
    explicit Message(const std::string& str = "") :
            contents(str) { }
    // 拷贝控制成员
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // 从给定Folder集合中添加删除本Message
    void save(Folder&);
    void remove(Folder&);
    void addFldr(Folder& f) {folders.insert(f);}
    void remFldr(Folder& f) {folders.erase(f);}
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

void swap(Message& lhs, Message& rhs) {
    using std::swap;
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMgs(&rhs);
    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}
#endif //CPPPRIMER5ELEARNING_MESSAGE_H
