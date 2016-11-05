//
// Created by Xiyun on 2016/11/5.
//

#include <iostream>

using namespace std;

template <typename Arr,unsigned size>
Arr* my_begin(Arr (&arr)[size])
{
    return arr;
}

template <typename Arr, unsigned size>
Arr* my_end(Arr (&arr)[size])
{
    return arr + size;
}

int main()
{   int arr[] = {1,23,4};
    cout << *my_begin(arr) << endl;
    //尾后迭代器，输出会越界
    cout << *(my_end(arr)-1)<< endl;
    return 0;
}
