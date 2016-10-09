//
// Created by Xi on 2016/3/10.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int printVector(vector<int>& ivec);

int main()
{
    string word;
    char cont = 'y';
    vector<string> svec;
    // 输入
    cout << "input some strings:" << endl;
    while(cin >> word )
    {
        svec.push_back(word);
        cout << "are you go on ?(y/n)" << endl;
        cin >> cont;
        if(cont != 'y'&& cont != 'Y')
            break;
        cout << "please input the next string:" << endl;
    }

    // 全部改成大写
    for(auto &v : svec)
    {
        for (auto &s : v)
            s = toupper(s);
//        cout << v << " ";
    }

    // 输出
    for(decltype(svec.size()) i = 0; i != svec.size(); ++i)
    {
        if(i != 0 && i%8 == 0)
            cout << endl;

        cout << svec[i] << " ";
    }
    cout << endl;

    //print Vector Test
//    vector<int> ivec{1,2,3,4,5,6};
//    printVector(ivec);

    return 0;
}
int printVector(vector<int>& ivec)
{
    for(auto i : ivec)
        cout << i << endl;
    cout << "size of vec is " << ivec.size() << endl;
    return 0;
}