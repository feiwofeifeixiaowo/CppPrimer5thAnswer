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
    Screen() = default;
    Screen(char c) : contents(H * W,c) { };
    // get the character at cursor
    char get() const {
        return contents[cursor];
    }
    Screen& move(pos r, pos c);
    //友元函数
    // <<  >> 输入输出函数
    friend std::ostream& operator << (std::ostream& os, const Screen<H, W>& c) {
        unsigned int i,j;
        for (int i = 0; i < c.height; ++i) {
            os << contents.substr(0,W) << std::endl;
        }
        return os;
    }
    friend std::istream& operator >> (std::istream& in, Screen c) {
        char a;
        in >> a;
        std::string temp(H * W, a);
        c.contents = temp;
        return in;
    }

private:
    pos cursor = 0;
    pos height = H, width = W;
    std::string contents;
};

template <unsigned H, unsigned W>
inline Screen<H, W>& Screen<H, W>::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}
#endif //CPP_PRIMER_5E_LEARNING_SCREEN_H
