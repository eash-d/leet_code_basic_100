# include <iostream>
# include <vector>

// https://leetcode.cn/problems/divide-array-into-equal-pairs/

class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
        int n1 = nums.size();
        int n2 = n1 / 2;
        int hash[1010] = {0};
        for (int i=0; i<n1; ++i)
            ++hash[nums[i]];

        for (int i=0; i<1010; ++i)
            if ( hash[i] % 2 != 0 )
                return false;
        return true;
    }
};


int main()
{
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4};
    bool ans;
    ans = s.divideArray(nums);
    std::cout << ans << std::endl;
}