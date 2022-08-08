# include <iostream>
# include <vector>


// 输入：nums = [3,0,1]
// 输出：2
// 解释：n = 3，因为有 3 个数字，所以所有的数字都在范围 [0,3] 内。2 是丢失的数字，因为它没有出现在 nums 中。


// 输入：nums = [9,6,4,2,3,5,7,0,1]
// 输出：8
// 解释：n = 9，因为有 9 个数字，所以所有的数字都在范围 [0,9] 内。8 是丢失的数字，因为它没有出现在 nums 中。


// 那不就是0,1,{2},3    0,1,2,3,4,5,6,7,{8},9


class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int s = n + (n*(n-1))/2;

        for (int i=0; i<n; ++i)
        {
            s -= nums[i];
        }
    
        return s;
    }
};


int main()
{
    Solution s;
    std::vector<int> nums = {9,6,4,2,3,5,7,0,1};
    int ans;
    ans = s.missingNumber(nums);
    std::cout << ans << std::endl;
    std::cin.get();
}