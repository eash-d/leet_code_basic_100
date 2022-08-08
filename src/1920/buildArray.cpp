# include <iostream>
# include <vector>

// 输入：nums = [0,2,1,5,3,4]
// 输出：[0,1,2,4,5,3]
// 解释：数组 ans 构建如下：
// ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
//     = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]
//     = [0,1,2,4,5,3]


class Solution {
public:
    std::vector<int> buildArray(std::vector<int>& nums) {
        std::vector<int> tmp;
        tmp = nums;
        for (int i=0; i<nums.size(); ++i)
        {
            nums[i] = tmp[tmp[i]];
        }
    return nums;
    }
};


int main()
{
    std::vector<int> nums{0,2,1,5,3,4};
    Solution s;
    
    for (int i =0; i<nums.size(); ++i)
        std::cout << nums[i] << std::endl;
    
    s.buildArray(nums);

    for (int i =0; i<nums.size(); ++i)
        std::cout << nums[i] << std::endl;

    std::cin.get();
}