// 这个增强了对STL中vector和C++11新特性的理解
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (nums[i] + nums[j] == target && i!=j)
                {
                    return {i, j};  // 这是c++11的一个新的特性，算是一个语法糖，意思是
                                    // 直接构造好一个新的vector<int> (根据函数类型确定)，
                                    // 并且通过{}里面的值去直接返回这个对象
                                    // 说白了就是他帮你直接 vector<int>result{i, j}; return result; 
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    std::vector<int>nums {2,7,11,15};
    int t = 9;
    std::vector<int>result = s.twoSum(nums, 9);
    std::cout << result[0] << std::endl;
    std::cout << result[1] << std::endl;

    std::cin.get();
}