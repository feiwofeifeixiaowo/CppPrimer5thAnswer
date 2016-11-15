//
// Created by Xiyun on 2016/11/16.
//

#ifndef CPP_PRIMER_5E_LEARNING_SCREEN_H
#define CPP_PRIMER_5E_LEARNING_SCREEN_H

template <unsigned H, unsigned W>
class Screen {
    using pos = std::string::size_type ;
public:
    //构造函数
    Screen();
    Screen(char c);
    char get() const;
    Screen& move(pos r, pos c);
    //友元函数
    // <<  >> 输入输出函数
    friend std::ostream& operator << (std::ostream& os, const Screen<H, W>& c);
    friend std::istream& operator >> (std::istream& in, Screen c);

private:
    pos cursor = 0;
    pos height = H, width = W;
    std::string contents;
};
#endif //CPP_PRIMER_5E_LEARNING_SCREEN_H
