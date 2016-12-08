//
// Created by Xiyun on 2016/12/7.
//

#include "Message.h"

void Message::save(Folder& f) {
    folders.insert(f);
    f.addMsg(this);
}
void Message::remove(Folder& f) {
    folders.erase(f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message& m) {
    for (auto f : m.folders)
        f->addMsg(this);
}
void Message::remove_from_Folders() {
    for (auto f : folders)
        f->remMsg(this);
}
Message::Message(const Message& m) :
    contents(m.contents), folders(m.folders) {
    add_to_Folders(m);
}
Message::~Message() {
    remove_from_Folders();
}
Message& Message::operator=(const Message& rhs) {
    // 通过先删除指针再插入它们来处理自赋值情况
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}