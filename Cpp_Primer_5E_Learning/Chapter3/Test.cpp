//
// Created by Xiyun on 16/9/7.
//
#include <iostream>
#include <string>

//声明函数
int stringTest();
int strCompareTese();
// 头文件不应包含using 声明
int main()
{
//    using std::cin;
//    using std::cout;
//    using std::endl;
//
//    cout << "Enter Two Numbers:" << endl;
//    int v1, v2;
//    cin >> v1 >> v2;
//    cout << "The Sum of " << v1 << " and " << v2 << " is "<< v1 + v2 <<endl;
//    stringTest();

    strCompareTese();
    using std::string;

    //必须确保每个加法运算符的两侧的运算对象至少有一个是string
    //string s1 = "," + "\n";//错误
    //string s2 = "hello" + ",";//错误
    return 0;
}

int stringTest()
{   using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

//    string word;
//    while(cin >> word)
//        cout << word << endl;
    string line;
    while(getline(cin,line))
        if(!line.empty())
        {
            //每次读入一整行,输出其中超过10个字符的行
            string::size_type st = line.size();//size_type  无符号类型,且与机器无关
            if(st > 10)
            {
                cout << line << endl;
                cout << line.size() << endl;
            }

        }

    return 0;
}

int strCompareTese()
{
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;

    int count = 1;
//    string input;
    //将string 替换成 char[] 数组程序无法退出
    //http://stackoverflow.com/questions/1287306/difference-between-string-and-char-types-in-c
    //由于某些历史原因,也为了与C兼容,所以C++语言中的字符串字面值并不是标准库类型string的对象.是不同的类型
    char input[20];
    cin >> input;
//    string str (input);
//    getline(cin,str);
    while( input != "done")
    {
        cin >> input;
//        cin.getline(input,20);
        cout << input;
        count ++;
    }

    cout << count << endl;
    return 0;
}
