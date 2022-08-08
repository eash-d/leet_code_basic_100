# include <iostream>
# include <cmath>

// 给你一个非负整数 x ，计算并返回 x 的 算术平方根 。
// 由于返回类型是整数，结果只保留 整数部分 ，小数部分将被 舍去 。
// 注意：不允许使用任何内置指数函数和算符，例如 pow(x, 0.5) 或者 x ** 0.5 。

// 示例 1：
// 输入：x = 4
// 输出：2

// 示例 2：
// 输入：x = 8
// 输出：2
// 解释：8 的算术平方根是 2.82842..., 由于返回类型是整数，小数部分将被舍去。
//  
// 提示：
// 0 <= x <= 2**31 - 1


class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;
        while (l <= r)
        {
            // 要写long long，防止leetcode中出现integer overflow ......
            long long mid = (l + r) / 2;
            long long product = mid * mid;
            if (product == x)
                return mid;
            else if (product < x)
                l = ++mid;
            else
                r = --mid;
        }
        return r;
    }
};


int main()
{
    Solution s;
    int ans;
    int x = 8;

    ans = s.mySqrt(x);

    std::cout << ans << std::endl;
}