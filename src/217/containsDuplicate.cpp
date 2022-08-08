# include <iostream>
# include <vector>
# include <algorithm>


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int i=0; i<n-1; ++i)
        {
            if (nums[i] == nums[i+1])  
                return true;
        }
        return false;
    }
};


int main()
{
    std::vector<int> nums {1, 2, 3, 1}; // {1, 2, 3, 4} 
    Solution s;
    bool ans;
    ans = s.containsDuplicate(nums);
    std::cout << ans << std::endl;
    std::cin.get();
}