# include <iostream>
# include <vector>


class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        for (int i=1; i<nums.size(); ++i)
            nums[i] += nums[i-1];
        return nums;
    }
};


int main()
{
    Solution s;
    std::vector<int> nums = {3,1,2,10,1};
    s.runningSum(nums);
    for (int i=0; i<nums.size(); ++i)
        std::cout << nums[i] << std::endl;
    std::cin.get();
}