# include <iostream>
# include <cmath>

// 给定一个 正整数 num ，编写一个函数，如果 num 是一个完全平方数，则返回 true ，否则返回 false 。
// 进阶：不要 使用任何内置的库函数，如  sqrt 。


class Solution {
public:
    bool isPerfectSquare(int num) {
        int sn = (int)sqrt(num);
        std::cout << sqrt(num) << std::endl;
        if (sn * sn == num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main()
{
    Solution s;
    int n1 = 16;
    int n2 = 14;
    bool r1, r2;
    r1 = s.isPerfectSquare(n1);
    r2 = s.isPerfectSquare(n2);


    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;

    std::cin.get();
}