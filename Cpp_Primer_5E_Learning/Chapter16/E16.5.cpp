//
// Created by Xiyun on 2016/11/5.
//

#include <iostream>

using namespace std;

//void print(int (&arr)[10])
//{
//    for(auto c : arr)
//        cout << c << endl;
//}

//value 数组存放的类型
template <typename Arr>
void print(Arr const& arr)
{
    for(auto const& elem : arr)
        cout << elem << endl;
}

int main()
{
    int arr[10] = {1,2,3,4,4,5};
    char c_arr[] = {'h','e','l','l','o'};
    print(c_arr);
    return 0;
}