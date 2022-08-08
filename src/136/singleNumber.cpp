# include <iostream>
# include <vector>


// 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
// 说明：
// 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？


// class Solution {
// public:
//     int singleNumber(std::vector<int>& nums) {
//         int ans = nums[0];
//         for (int i=1; i<nums.size(); ++i)
//         {
//             ans ^= nums[i];
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int ans = 0;
        for (int i=0; i<nums.size(); ++i)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};


int main()
{
    int ans;
    Solution s;
    std::vector <int> n = {4,1,2,1,2};
    ans = s.singleNumber(n);

    std::cout << ans << std::endl;
    std::cin.get();
}