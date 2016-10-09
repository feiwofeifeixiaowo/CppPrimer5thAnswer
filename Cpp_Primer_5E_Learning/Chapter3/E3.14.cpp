//
// Created by Xi on 2016/3/10.
// 范围for语句中不应该改变其所遍历序列的大小
//

#include <iostream>
#include <vector>
using namespace std;

int initTest();
bool pushToVector();
int putToVector();
int modifyVector();

int main()
{
//    int num = 0;
//    char ch = 'y';
//    vector<int> ivec;
//    while(cin >> num)
//    {
//        ivec.push_back(num);
//        char cont;
//        cout << "are you go on (y/n)" << endl;
//        cin >> cont;
//        if(cont != 'y')
//            break;
//    }
//
//    for(auto mem : ivec)
//        cout << mem << " ";
//    cout << endl;

    modifyVector();
    return 0;
}

int initTest()
{
    vector<int> ivec;
    vector<int> v2(ivec);
    vector<int> v3 = v2;
    vector<string> v4(3,"Str");//3个 Str string 类型
    vector<int> v5(5);// 5个元素,每个都是0
    vector<int> v6{1,2,3,4};//列表初始化例子   //注意区分花括号跟圆括号
    vector<int> v7 = {1,2,3,4};
    vector<string> v1{"a","an","the"};
    vector<int> ivec1(10,-1);
    vector<string>svec(3,"hi");

    //vector 会对模板中的类型执行默认初始化

    return 0;
}

//vector 添加操作
bool pushToVector()
{
    vector<int> ivec;//空vector
    for (int i = 0; i != 100; ++i)
    {
        ivec.push_back(i);
    }
    return true;
}
//从输入中读取单词,存入到vector中
int putToVector()
{
    vector<string> svec;
    string word;
    while(cin >> word)
    {
        svec.push_back(word);
    }
    return 0;
}

int modifyVector()
{
    vector<int> ivec {1,2,3,4,5,6,7,8,9};
    for(auto &i : ivec)
        i *= i;

    for(auto i: ivec)
        cout << i << endl;

    //vector size 类型
    auto s = ivec.size();
    vector<int>::size_type s1 = ivec.size();

    cout << "vector size is " << s << endl;
    return 0;
}

//统计分数情况
//input 42 65 95 100
//output 0 0 0 0 1 0 1 0 0 1 1
int countScore()
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    while(cin >> grade)
        if(grade < 100)
            ++scores[grade/10];
    return 0;
}

int vectorAt()
{

    vector<int> ivec;

    for(decltype(ivec.size()) i; i != 10; i++)
    {
        ivec[i] = i;//错误:  下标运算符可以用于访问已经存在的元素,不能用于添加元素
        ivec.push_back(i);// 正确
    }
    return 0;
}