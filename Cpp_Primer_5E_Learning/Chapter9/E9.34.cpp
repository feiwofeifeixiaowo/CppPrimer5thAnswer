//
// Created by Xiyun on 2016/10/8.
//
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi{3,2,6,9,6,7,3,1};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if(*iter %2)
        {
            iter = vi.insert(iter,*iter);
            ++iter;
//            iter+=2;
        }
        ++iter;
    }

    for(auto i:vi) cout << i << "\t";
    cout << endl;
    cout << vi.capacity() << endl;
    vi.shrink_to_fit();
    cout << vi.capacity() << endl;
    vi.reserve(5);
    for(auto i:vi) cout << i << "\t";
    cout << endl;
    vector<int> ivec;
    cout << "ivec size: " << ivec.size() << endl;
    cout << "ivec capacity: " << ivec.capacity() << endl;


    for(vector<int>::size_type ix; ix !=24; ++ix)
    {
        ivec.push_back(ix);
    }
    ivec.reserve(50);//要求分配至少50容量

    while(ivec.size() != ivec.capacity())
        ivec.push_back(0);

    ivec.push_back(25);
    ivec.shrink_to_fit();//要求归还内存
    cout << "ivec size: " << ivec.size() << endl;
    cout << "ivec capacity: " << ivec.capacity() << endl;

    return 0;
}

