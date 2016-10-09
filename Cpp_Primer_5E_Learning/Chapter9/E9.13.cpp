//
// Created by Xiyun on 2016/9/24.
//

#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <forward_list>
#include <array>

using namespace std;

bool query();
vector<int>::const_iterator query2();

int main()
{
//    list<deque<int>> listDeque;
//    cout << query() << endl;
//    query2();

    // E9.13
    list<int> listInt{1,2,3,4,5,6};
    vector<int> ivec{1,2,3,4,5,6};

    vector<double> dvec(listInt.begin(),listInt.end());
    vector<double> dvec2(ivec.begin(),ivec.end());



    return 0;
}

bool query()
{
    vector<int> ivec{1,2,3,4,5,6,7,8};

    int i = 3;

    auto beg = ivec.cbegin(),end = ivec.cend();

    for(;beg != end; ++beg){
//        cout << "vector " << *beg << endl;
        if(*beg == i) {
            cout << "int i :" << i << endl;
            return true;
        }
    }
    return false;
}

vector<int>::const_iterator query2()
{
    vector<int> ivec{1,2,3,4,5,6,7,8};

    int i = 3;

    auto beg = ivec.cbegin(),end = ivec.cend();

    for(;beg != end; ++beg){
        cout << "vector " << *beg << endl;
        if(*beg == i) {
            cout << "int i :" << i << endl;
            return beg;
        }
    }
    //test iterator
    list<string>::iterator iter;
    vector<int>::difference_type count;

    //version 1 assign
    list<string> names;
    vector<const char*> oldstyle;
//    names = oldstyle; //error 容器类型不匹配
    names.assign(oldstyle.cbegin(),oldstyle.cend());

    //version 2 assign
    list<string> slist1(1);
    slist1.assign(10,"hi");
    // version 2  等价于下列代码
    slist1.clear();
    slist1.insert(slist1.begin(),10,"hi");

    //swap test
    vector<string> svec(10);
    vector<string> svec2(24);
    swap(svec,svec2);

    //E9.7
    vector<int>::size_type sz;
    vector<int>::iterator iter2;
    list<string>::iterator iter3;//to write
    list<string>::const_iterator iter4;//to read
    list<string> listString;
    listString.push_back("123");


    //page 300 test
    list<string> authors = {"Milton","Tom","Bob"};
    vector<const char*> articles = {"a","an","the"};

    list<string> list2(authors);
//    deque<string> authList(authors);//bad
//    vector<string> words(articles);//bad  将一个容器初始化为另一个容器的拷贝时，两个容器类型和元素类型都必须相同

    forward_list<string> words2(articles.begin(),articles.end());

    deque<string> authList2(authors.begin(),authors.end());
    array<int, 12> arrayTest;
    array<string, 12> strArray;
    array<int, 12>::size_type sz_array;

    array<int, 10> ia1{1,2,3,4,5,6,7,8,9,10};
    array<int, 10> ia2;
    array<int,10> ia3{42};
//    array<int>::size_type// error array<int> is not a type

    int digs[10] = {0,1,2,3,4,5,6,7,8,9};
//    int cpy[10] = digs;//error  can not copy 内置数组

    array<int, 10> digits = {0,1,2,3,4,5,6,7,8,9};
    array<int, 10> copy = digits;// array lib 无此限制

    return end;
}

void E9_eleven()
{
    vector<int> iv1;
    vector<int> iv2(10);
    vector<int> iv3(10,1);
    vector<int> iv4{1,2,3,4,5,6,7,8};
    vector<int> iv5(iv4);
    vector<int> iv6(iv5.begin(),iv5.end());
}
