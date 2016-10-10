//
// Created by Xiyun on 2016/10/11.
//
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int stackTest();

int main()
{
//    stackTest();
    string expression("this is a (pretty)");
    stack<char >charStack;
    bool bseen = false;
    for(auto &c:expression)
    {
        if(c==')')
        {
           bseen = false;
        }
        else if (c=='(')
        {
            bseen = true;
            continue;//‘（’不加入stack
        }
        if(bseen)charStack.push(c);
    }

    string rplstr;
    while(!charStack.empty())
    {
        rplstr += charStack.top();
        charStack.pop();
    }
    cout << rplstr << endl;
    string result = expression.replace(expression.find_first_of("(")+1,rplstr.size(),rplstr);
    cout << result << endl;
    return 0;
}

int stackTest()
{
    stack<int> intStack;
    for(size_t ix = 0; ix != 10; ++ix)
    {
        intStack.push(ix);
    }
    while(!intStack.empty())
    {
        int value = intStack.top();
        cout << "value: " << value << endl;
        intStack.pop();//don not return element
    }
    return 0;
}