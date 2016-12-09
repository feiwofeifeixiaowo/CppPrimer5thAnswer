//
// Created by Xiyun on 2016/12/7.
//

#include "Folder.h"

void Folder::add_to_Msgs(const Folder &f) {
    for (auto msg : f.msgs)
        msg->addFldr(this);
}
void Folder::remove_from_Msgs() {
    while (!msgs.empty())
        (*msgs.begin())->remove(this);
}
Folder::Folder(const Folder& f) :
        msgs(f.msgs) {
    add_to_Msgs(f);
}
Folder& Folder::operator=(const Folder& rhs) {
    remove_from_Msgs();
    msgs = rhs.msgs;
    add_to_Msgs(rhs);
    return *this;
}
Folder::~Folder() {
    remove_from_Msgs();
}