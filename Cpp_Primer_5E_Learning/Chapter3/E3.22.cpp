//
// Created by Xi on 2016/3/11.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int arithmeticInterator();
int changeTextUpper();
int binarySearch();

int main()
{
    /*
    string line;
    vector<string> svec;
//    char ch;
    cout << "input some string:" << endl;
    while(getline(cin,line))
    {
        svec.push_back(line);
//        cout << "are u go on? y/n  ";
//        cin >> ch;
//        getchar();
//        if(ch != 'y' && ch != 'Y')
//            break;
//        cout << "input a new  string:" << endl;

    }


    for(auto it = svec.begin(); it != svec.end() && !it->empty(); ++it)
    {
        for(auto it2 = it->begin(); it2 != it->end(); ++it2)
            *it2 = toupper(*it2);
        cout << *it << endl;
    }
*/
//    changeTextUpper();
    //arithmeticInterator();
    binarySearch();
return 0;
}

int arithmeticInterator()
{
    vector<int> vi{1,2,3,4,5,6,7,8,9,10};
    auto mid = vi.cbegin() + vi.size() / 2;
    cout << *mid << endl;
    return 0;
}

int binarySearch()
{
    vector<int> text {1,2,3,4,5,6,7,8,9};
    auto begin = text.begin();
    auto end = text.end();
    auto mid = text.begin() + text.size()/2;

    int sought = 4;
    while (mid != end && *mid != sought)
    {
        if(sought < *mid)
            end = mid;
        else
            begin = mid + 1;
        mid = begin + (end - begin)/2;
    }
    if(*mid == sought)
        cout << "found! " << endl;
    else
        cout << "not found !" << endl;
    return 0;
}

int changeTextUpper()
{
    string line;
    vector<string> svec;
    while(getline(cin,line))
        svec.push_back(line);

    /*
    for (string line; getline(cin, line); svec.push_back(line));
    for(auto& line : svec)
    {
        for(auto & word : line)
            if (isalpha(word))
                word = toupper(word);
        cout << line << " ";
    }
     */

    for(auto it = svec.begin();it != svec.end() && !it->empty(); ++it)
        for(auto it2 = it->begin(); it2 != it->end(); ++it2)
            *it2 = toupper(*it2);

    for(auto it = svec.begin(); it != svec.end(); ++it)
        cout << *it << endl;

    return 0;
}