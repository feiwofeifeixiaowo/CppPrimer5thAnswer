//
// Created by Xiyun on 2016/11/17.
//
#include <iostream>
#include <vector>

using namespace std;

auto ret_vec() -> vector<int>*
{
    return new vector<int>{};
}

auto print(vector<int>* ivec) ->void
{
    for (vector<int>::size_type i = 0; i< ivec->size(); ++i)
        cout << (*ivec)[i] << "\t";
    cout << endl;

    // release
    delete(ivec);
}
int main ()
{
    vector<int >* pivec = ret_vec();
    int i;
    while(cin >> i)
    {
        pivec->push_back(i);
        if(pivec->size() > 4)
            break;
    }
    print(pivec);

    return 0;
}
