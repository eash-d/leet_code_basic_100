# include <iostream>
# include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        int i;
        int j;
        for(i=0; i<nums.size()-1; i++)
        {
            for (j=i+1; j<nums.size(); j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    std::cout << nums[i] << std::endl;
                    std::cout << nums[j] << std::endl;
                    return result;
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    std::vector<int>test;
    test.push_back(2);
    test.push_back(7);
    test.push_back(11);
    test.push_back(15);
    s.twoSum(test, 9);

    std::cin.get();
}