//
// Created by Xiyun on 16/6/18.
// regex_search test
//

#include <string>
#include <regex>
#include <iostream>

using namespace std;

int main() {

    string test_str = "receipt freind theif receive";

    string pattern ("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex reg1(pattern,regex::icase);//在进行文本匹配时将忽略大小写

//    smatch results;
    sregex_iterator it(test_str.begin(),test_str.end(), reg1);
    sregex_iterator end_it;
    for (; it!=end_it; it++)
        cout << it->str() << endl;

    /*if (regex_search(test_str,results,r))
        cout << results.str() << endl;
*/
//    return 0;
    // print 1 to 100 without for while 
    return system("seq 1 100");
}