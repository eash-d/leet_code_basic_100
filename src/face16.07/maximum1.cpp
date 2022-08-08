# include <iostream>

// 编写一个方法，找出两个数字a和b中最大的那一个。不得使用if-else或其他比较运算符。

// class Solution {
// public:
//     int maximum(int a, int b) {
//         return std::max(a, b);
//     }
// };


class Solution {
public:
    int maximum(int a, int b) {
        return a>b ? a:b;
    }
};


int main()
{
    int a = 3, b = 4;
    int r;
    Solution s;
    r = s.maximum(a, b);
    std::cout << r << std::endl;
    std::cin.get();
}