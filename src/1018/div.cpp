# include <iostream>
# include <vector>

// https://leetcode.cn/problems/binary-prefix-divisible-by-5/

// class Solution {
// public:
//     std::vector<bool> prefixesDivBy5(std::vector<int>& nums) {
//         std::vector<bool> ret;
//         long long v = 0;
//         for (int i=0; i<nums.size(); ++i)
//         {
//             v = v*2 + nums[i];
//             ret.push_back(v % 5 == 0);
//         }
//         return ret;
//     }
// };


class Solution {
public:
    std::vector<bool> prefixesDivBy5(std::vector<int>& nums) {
        std::vector<bool> ret;
        int v = 0;
        for (int i=0; i<nums.size(); ++i)
        {
            v = (v<<1) | nums[i];
            ret.push_back(v % 5 == 0);
            v %= 5;
        }
        return ret;
    }
};


int main()
{
    std::vector<int> nums {1,1,1};
    std::vector<bool> ans;
    Solution s;
    ans = s.prefixesDivBy5(nums);
    for (int i=0; i<ans.size(); ++i)
        std::cout << ans[i] << std::endl;
}

