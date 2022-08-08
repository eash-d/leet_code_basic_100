# include <iostream>


// 给定一个 正整数 num ，编写一个函数，如果 num 是一个完全平方数，则返回 true ，否则返回 false 。
// 进阶：不要 使用任何内置的库函数，如  sqrt 。


class Solution {
public:
    bool isPerfectSquare(int num) {
        // 两个int数相乘，如果==num，那么return true；
        // 如果相乘大于num，说明没找到
        for (long long i=1; i*i<=num; ++i)
        {
            if(i*i == num)
            {
                return true;
            }
        }
        return false;
    }
};


int main()
{
    Solution s;
    int n1 = 16;
    int n2 = 14;
    int n3 = 2147483647;
    bool r1, r2, r3;
    r1 = s.isPerfectSquare(n1);
    r2 = s.isPerfectSquare(n2);
    r3 = s.isPerfectSquare(n3);
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;

    std::cin.get();
}