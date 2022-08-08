# include <iostream>
# include <vector>

// 给你一个整数数组 nums 和一个整数 k ，请你返回数对 (i, j) 的数目，满足 i < j 且 |nums[i] - nums[j]| == k 。
// |x| 的值定义为：
// 如果 x >= 0 ，那么值为 x 。
// 如果 x < 0 ，那么值为 -x 。


class Solution {
public:
    int countKDifference(std::vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for (int i=0; i<n; ++i)
        {
            for (int j=i+1; j<n; ++j)
            {
                if ((nums[i] - nums[j]==k) | (nums[i]-nums[j]==-k))
                    ++count;
            }
        }
        return count;
    }
};


int main()
{
    int ans;
    int k = 3;
    std::vector<int> nums {1,3};
    Solution s;
    ans = s.countKDifference(nums, k);
    std::cout << ans << std::endl;
    std::cin.get();
}