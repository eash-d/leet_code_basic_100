# include <iostream>
# include <vector>

// 给你一个长度为 n 的整数数组 nums 。
// 请你构建一个长度为 2n 的答案数组 ans ，数组下标 从 0 开始计数 ，对于所有 0 <= i < n 的 i ，满足下述所有要求：
// ans[i] == nums[i]
// ans[i + n] == nums[i]
// 具体而言，ans 由两个 nums 数组 串联 形成。
// 返回数组 ans 。

// 输入：nums = [1,2,1]
// 输出：[1,2,1,1,2,1]
// 解释：数组 ans 按下述方式形成：
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]


class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        int n = nums.size();
        for (int i=0; i<n; ++i)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};


int main()
{
    std::vector<int> nums {1,2,1};
    std::vector<int> ans;
    Solution s;
    s.getConcatenation(nums);
    for (int i=0; i<nums.size(); ++i)
        std::cout << nums[i] << std::endl;
    std::cin.get();
}