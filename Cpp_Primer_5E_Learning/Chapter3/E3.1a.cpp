//
// Created by Xi on 2016/3/10.
//
//#include <iostream>

//using namespace std;
//
//int main()
//{
//    int a = 0,b = 0;
//    cout << "please input two numbers:" << endl;
//    cin >> a >> b ;
//    if (a > b)
//        for (int i = b; i <= a; ++i)
//        {
//            cout << i << endl;
//        }
//    else
//        for (int j = a; j <= b; ++j)
//        {
//            cout << j << endl;
//        }
//    return 0;
//}
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int v1, v2;
    cout << "Input Two Numbers:" << endl;
    cin >> v1 >> v2;
    if (v1 > v2)
        for (int i = v2; i <= v1; ++i)
        {
            cout << i << endl;
        }
    else
        for (int j = v1; j <= v2; ++j)
        {
            cout << j << endl;
        }
    return 0;
}
