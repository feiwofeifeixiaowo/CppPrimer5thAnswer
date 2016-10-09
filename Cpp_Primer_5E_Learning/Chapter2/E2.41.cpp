//
// Created by Xi on 2016/3/10.
//
#include <iostream>
#include <string>

using namespace std;

class Sales_data {
    friend std::istream& operator >> (std::istream&, Sales_data&);
    friend std::ostream& operator << (std::ostream&,const Sales_data&);
    friend bool operator < (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);

public: // 构造函数
    Sales_data() = default;
    Sales_data(const std::string &book): bookNo(book) {}
    Sales_data(std::istream &is) { is >> *this;}

public:
    Sales_data& operator += (const Sales_data&);
    std::string isbn() const {return bookNo;}

private:
    std::string bookNo;         // 书籍编号 初始化为空
    unsigned units_sold = 0;    // 书籍销售量
    double sellingprice = 0.0;  // 原始价格
    double saleprice = 0.0;     // 实际价格
    double discount = 0.0;      // 折扣
};

inline bool compareIsbn(const Sales_data &lhs,const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

Sales_data operator + (const Sales_data&, const Sales_data&);

inline bool operator == (const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice && lhs.saleprice == rhs.saleprice && lhs.isbn() == rhs.isbn();
}

inline bool operator != (const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs); // 基于== 运算得出
}

Sales_data& Sales_data::operator+=(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
    if(sellingprice != 0)
        discount = saleprice / sellingprice;
    return *this;
}

Sales_data operator + (const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data ret(lhs);
    ret += rhs;
    return ret;
}

std::istream& operator >> (std::istream &in, Sales_data &s)
{
    in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
    if(in && s.sellingprice != 0)
        s.discount = s.saleprice / s.sellingprice;
    else
        s = Sales_data(); // 输入错误，重置输入的数据   默认构造函数
    return in;
}

std::ostream& operator << (std::ostream &out, Sales_data &s)
{
    out << s.isbn() << " " << s.units_sold << " " << s.sellingprice << " " << s.saleprice << " " << s.discount;
    return out;
}

int main()
{
    Sales_data book;
    cout << "请输入销售记录：" << endl;
    while(std::cin >> book)
    {
        cout << "ISBN、售出本数、原始价格、实售价格、折扣为" << book << endl;
    }
    Sales_data trans1, trans2;
    cout << "请输入两条ISBN相同的销售记录：" << endl;
    cin >> trans1 >> trans2;
    if(compareIsbn(trans1,trans2))
        cout << "汇总信息、ISBN、售出本数、原始价格、实售价格、折扣为" << trans1 + trans2 << endl;
    else
        cout << "两条销售记录的ISBN不同" << endl;

    Sales_data total,trans;
    cout << "请输入几条ISBN相同的销售记录：" << endl;
    if(cin >> total) {
        while (cin >> trans) {
            if (compareIsbn(trans, total))
                total += trans;
            else {   // ISBN不同
                cout << total << endl;
                break;
            }
        }
        cout << "汇总信息、ISBN、售出本数、原始价格、实售价格、折扣为" << total << endl;
    }
    else
    {
        cout << "没有数据" << endl;
        return -1;
    }

    int num = 1; // 当前书籍销售总数
    cout << "请输入若干销售记录：" << endl;
    if(cin >> trans1)
    {
        while(cin > trans2)
        {
            if(compareIsbn(trans1,trans2))
                num++;
            else
            {
                cout << trans1.isbn() << "共有" << num << "条销售记录" << endl;
                trans1 = trans2;
                num = 1;
            }
        }
        cout << trans1.isbn() << "共有" << num << "条销售记录" << endl;
    }
    else
    {
        cout << "没有数据" << endl;
        return -1;
    }
    return 0;   // 主函数返回
}
