//
// Created by Xiyun on 2016/12/7.
//

#ifndef CPPPRIMER5ELEARNING_FOLDER_H
#define CPPPRIMER5ELEARNING_FOLDER_H

#include "Message.h"
#include <set>

class Folder {
//    friend class Message;
public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void addMsg(Message& m) {msgs.insert(m);}
    void remMsg(Message& m) {msgs.erase(m);}
private:
    std::set<Message*> msgs;
    void add_to_Msgs(const Folder& f);
    void remove_from_Msgs();
};
#endif //CPPPRIMER5ELEARNING_FOLDER_H
