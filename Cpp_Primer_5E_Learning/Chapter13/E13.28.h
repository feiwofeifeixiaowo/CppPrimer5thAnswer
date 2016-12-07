//
// Created by Xiyun on 2016/12/6.
//

#ifndef CPPPRIMER5ELEARNING_E13_28_H
#define CPPPRIMER5ELEARNING_E13_28_H
class TreeNode {
public:
    TreeNode() :
            value(std::string()), count(0), left(nullptr), right(nullptr) { }
    TreeNode(const TreeNode& p);
//    TreeNode& operator=(const TreeNode& rhs);
    void CopyTree();
    int ReleaseTree();
    ~TreeNode();
private:
    std::string value;
    int         count;
    TreeNode    *left;
    TreeNode   *right;
};

TreeNode::TreeNode(const TreeNode &p) :
value(p.value), count(1), left(p.left), right(p.right) {
    if (left)
        left->CopyTree();
    if (right)
        right->CopyTree();
}
//TreeNode& TreeNode::operator=(const TreeNode &rhs) {
//    value = rhs.value;
//    count = rhs.count;
//    delete left;
//    delete right;
//    left = rhs.left;
//    right = rhs.right;
//    return *this;
//}
void TreeNode::CopyTree() {
    if (left)
        left->CopyTree();
    if (right)
        right->CopyTree();
    count++;
}
int TreeNode::ReleaseTree() {
    if (left) {
        if (!left->CopyTree())
            delete left;
    }
    if (right) {
        if (!right->CopyTree())
            delete right;
    }
    count--;
    return count;
}
TreeNode::~TreeNode() {
    if (count)
        ReleaseTree();
}

class BinStrTree {
    BinStrTree() = default;
    BinStrTree(const BinStrTree& p);
    ~BinStrTree();
//    BinStrTree &operator=(const BinStrTree& rhs);
private:
    TreeNode *root;
};

BinStrTree::BinStrTree(const BinStrTree &p) {
    root = p.root;
}
BinStrTree::~BinStrTree() {
    if (!root->ReleaseTree())
        delete root;
}
#endif //CPPPRIMER5ELEARNING_E13_28_H
