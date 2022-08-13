# include <iostream>
# include <vector>

// https://leetcode.cn/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int hash[111] = {0};
        int cnt = 0;
        for (int i=0; i<nums.size(); ++i)
            ++hash[nums[i]];

        for (int i=0; i<111; ++i)
            if (hash[i] > 1)
            {
                int x = hash[i];
                cnt += ( x * (x-1) ) / 2;
            }
        return cnt;
    }
};


int main()
{
    Solution s;
    std::vector<int> nums = {1, 1, 1, 1};
    int ans;
    ans = s.numIdenticalPairs(nums);
    std::cout << ans << std::endl;
}
