//
// Created by Xi on 2016/3/11.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{   char ch ='y';
    int num;
    vector<int> ivec;
    cout << "input num:" << endl;
    while(cin >> num)
    {
        ivec.push_back(num);
        cout << "are u go on? (y/n)" << endl;
        cin >> ch;
        if(ch !='y'&& ch != 'Y')
            break;
        cout << "input num:" << endl;
    }

    for(decltype(ivec.size()) i = 0; i < ivec.size() - 1; i+=2)
    {
        cout << ivec[i] + ivec[i+1] << " ";
        if((i + 2) % 10 == 0)   //
            cout << endl;
    }

    // 基数个时候 单独输出最后一个整数
    if(ivec.size() % 2 != 0)
        cout << ivec[ivec.size() -1];

    return 0;
}