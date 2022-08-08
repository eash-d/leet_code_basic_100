# include <iostream>

// 给你一个整数 n（10 进制）和一个基数 k ，
// 请你将 n 从 10 进制表示转换为 k 进制表示，计算并返回转换后各位数字的总和 。
// 转换后，各位数字应当视作是 10 进制数字，且它们的总和也应当按 10 进制表示返回。

// 输入：n = 34, k = 6
// 输出：9
// 解释：34 (10 进制) 在 6 进制下表示为 54 。5 + 4 = 9 。

// 输入：n = 10, k = 10
// 输出：1
// 解释：n 本身就是 10 进制。 1 + 0 = 1 。

// 1 <= n <= 100
// 2 <= k <= 10


class Solution {
public:
    int sumBase(int n, int k) {
        int remainder;
        int ans=0;
        int result;
        while (1)
        { 
            result = n / k;
            if (result)
            {
                remainder = n % k;
                ans += remainder;
                n = result;
            }   
            else
            {
                ans += n;
                break;
            }  
        }
        return ans;
    }
};


int main()
{
    int ans;
    int n=10;
    int k=10;
    Solution s;
    ans = s.sumBase(n, k);
    std::cout << ans << std::endl;
    std::cin.get();
}