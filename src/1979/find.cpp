# include <iostream>
# include <vector>
# include <algorithm>

// 提示：
// 2 <= nums.length <= 1000
// 1 <= nums[i] <= 1000


class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        int mx = *std::max_element(nums.begin(), nums.end());
        int mn = *std::min_element(nums.begin(), nums.end());
        while (1)
        {
            int ret = mx % mn;
            if (!ret)
                return mn;
            else
            {
                mx = mn;
                mn = ret;
            }
        }
    }
};


int main()
{
    std::vector<int> nums {3,3};
    Solution s;
    int ans;
    ans = s.findGCD(nums); 
    std::cout << ans << std::endl;
}