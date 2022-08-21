# include <iostream>
# include <vector>

// https://leetcode.cn/problems/binary-subarrays-with-sum/

class Solution {
public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        std::vector<int> sum = nums;
        int n = nums.size();
        int ans = 0;

        for (int i=1; i<n; ++i)
            sum[i] += sum[i-1];
        
        int hash[30003] = {0};

        for (int i=0; i<n; ++i)
        {
            if (sum[i] == goal)
                ++ans;

            int hash_index = sum[i] - goal;

            if (hash_index > -1 )
                ans += hash[hash_index];

            ++hash[ sum[i] ];
        }

        return ans;
    }   
};


int main()
{
    Solution s;
    std::vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    int ans;
    ans = s.numSubarraysWithSum(nums, goal);
    std::cout << ans << std::endl;
}