# include <iostream>
# include <vector>

// 给你一个整数 num ，请你返回三个连续的整数，它们的 和 为 num 。如果 num 无法被表示成三个连续整数的和，请你返回一个 空 数组。

// 示例 1：
// 输入：num = 33
// 输出：[10,11,12]
// 解释：33 可以表示为 10 + 11 + 12 = 33 。
// 10, 11, 12 是 3 个连续整数，所以返回 [10, 11, 12] 。

// 示例 2：
// 输入：num = 4
// 输出：[]
// 解释：没有办法将 4 表示成 3 个连续整数的和。
//  

// 提示：
// 0<= num <= 10**15


class Solution {
public:
    // sum(a-1, a, a+1) = num --> 3a = num
    std::vector<long long> sumOfThree(long long num) {
        if (num % 3 == 0)
        {
            long long ret = num/3;
            long long l = ret-1;
            long long  r = ret+1;
            return {l, ret, r};
        }
        else
        {
            return {};
        }
    }
};


int main()
{
    Solution s;
    long long num = 6675975537;
    std::vector <long long> ans;
    ans = s.sumOfThree(num);
    for (int i=0; i<ans.size(); ++i)
        std::cout << ans[i] << "\t";
}