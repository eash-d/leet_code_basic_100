# include <iostream>
# include <vector>

// https://leetcode.cn/problems/count-number-of-pairs-with-absolute-difference-k/

class Solution {
public:
    int countKDifference(std::vector<int>& nums, int k) {
        int hash[299] = {0};
        int cnt = 0;

        for (int i=0; i<nums.size(); ++i)
            ++hash[nums[i]];
        
        for (int i=1; i<201; ++i)
        {
            if ((hash[i]==0) || (hash[i+k]==0))
                continue;
            else
                cnt += hash[i] * hash[i+k];
        }
        return cnt;
    }
};


int main()
{
    int ans;
    int k = 1;
    std::vector<int> nums {1, 2, 2, 1};
    Solution s;
    ans = s.countKDifference(nums, k);
    std::cout << ans << std::endl;
}