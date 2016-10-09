//
// Created by Xiyun on 16/9/18.
// E3.20
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char con;
    int input;
    vector<int> ivec;
    cout << "input some int num:" << endl;
    while(cin >> input)
    {
        ivec.push_back(input);
        cout << "are you continue? (y/n)" << endl;

        cin >> con;
        if(con != 'Y' && con != 'y')
            break;
        cout << "input some int num:" << endl;
    }

    for(decltype(ivec.size())i = 0; i != ivec.size(); ++i)
    {
        cout << ivec[i] + ivec[i+1]<< "\t";
    }

    cout << "Section A" << endl;
    for(decltype(ivec.size())i = 0; i != ivec.size(); ++i)
    {
        cout << ivec[i] + ivec[ivec.size() -1 - i]<< "\t";
    }
    cout << "Section B" << endl;

    return 0;
}