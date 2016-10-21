//
// Created by Xiyun on 2016/10/21.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

///Users/X/Git_Repo/CppPrimer5thAnswer/Cpp_Primer_5E_Learning/Chapter10/E10.20.cpp:22:42: error: call to deleted constructor of 'basic_ostream<char, std::__1::char_traits<char> >'

void  test(vector<string> &words,ostream &os)
{
    //引用捕获
    size_t v1 = 42;
    char c = ' ';
    auto f2 = [&v1](){return v1;};
    v1 = 10;
//    os << f2();
    // v1 隐士捕获,值捕获
    auto wc = find_if(words.begin(),words.end(),
                        [=](const string &a){ return a.size() >= v1;});
    //os 隐士捕获，c显示捕获
    for_each(words.begin(),words.end(),[&, c](const string &a){os << a << c;});

    os << endl;

    for_each(words.begin(),words.end(),
                [=, &os](const string &a){os << a << c;});

    os << endl;

    auto f3 = [v1]() mutable {return ++v1;};
    os << f3() << endl;

    //指定lamdba返回类型
    transform(words.begin(),words.end(),words.begin(),
                [](string str) -> string
                    {
                        if(str.size() > 2)
                        {
                            str += "s";
                            return str;
                        }
                        else
                        {
                            return str;
                        }
                    });
    for_each(words.begin(),words.end(),
                [&os](const string &s){os << s << " ";});
}

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    //去除重复元素
    elimDups(words);
    //按长度排序
    stable_sort(words.begin(),words.end(),
                [](const string &a, const string &b)
                {return a.size() < b.size();});
    //找到第一个size 大于 给定 sz 的 元素
//    auto wc = find_if(words.begin(),words.end(),
//                      [sz](const string &a)
//                      {return a.size() >= sz;});
//    auto wc = partition(words.begin(),words.end(),
//                        [sz](const string &s)
//                        {return s.size() < sz;});
    size_t wc = count_if(words.begin(),words.end(),
                        [sz](const string &s){return s.size() > sz;});
    //计算满足 size >= sz 的元素的数目
//    auto count = words.end() - wc;
    //输出
    cout << wc << " " << make_plural(wc,"word","s")
         << " of length " << sz << " or longer" << endl;
    //打印长度大于给定值的单词，每个单词后面接一个空格
//    for_each(wc,words.end(),
//             [](const string &elem){cout << elem << "\t";});
}

int main()
{
    vector<string> ivec{"hello","world"};
//    test(ivec,cout);
    biggies(ivec,3);
    return 0;
}
