//
// Created by Xi on 2016/3/9.
//

#include<iostream>
#include"Sales_item.h"

int main()
{
    Sales_item total; // 保存下一条交易记录的变量
    if(std::cin >> total)
    {
        Sales_item trans; // 保存总和
        while(std::cin >> trans)
        {
            if(trans.isbn() == total.isbn())
            {
                total += trans; // 更新销售总额
            }
            else
            {
                std::cout << total << std::endl; // 输出上一本书的结果
                total = trans; // 开始统计下一本书
            }
        }
        std::cout << total << std::endl; // 输出最后一本书的结果
    }
    else
    {
        // 输入的数据为空
        std::cerr << "No data!" << std::endl;
        return -1;
    }

    return 0; // 正常结束
}