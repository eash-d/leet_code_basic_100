# include <iostream>
# include <vector>
# include <algorithm>

// 给你一个整数数组 nums，请你将该数组升序排列。

// 输入：nums = [5,2,3,1]
// 输出：[1,2,3,5]


class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        return nums;    
    }
};


int main()
{
    Solution s;
    std::vector<int> nums = {5, 2, 3, 1};
    s.sortArray(nums);
    for (int i=0; i<nums.size(); ++i)
    {
        std::cout << nums[i] << std::endl;
    }
    std::cin.get();
}