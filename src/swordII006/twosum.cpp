# include <iostream>
# include <vector>

// **数组已经升序排列好了**
// 输入：numbers = [1,2,4,6,10], target = 8
// 输出：[1,3]
// 解释：2 与 6 之和等于目标数 8 。因此 index1 = 1, index2 = 3 。

// 假设数组中存在且只存在一对符合条件的数字，同时一个数字不能使用两次。


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        
        // 缩短数组
        // while (numbers[n] >= target)
        //     --n;
        int flag = 0;
        while ( numbers[n] - abs(target) > 0)
        {
            --n;
            flag = 1;
        }
        if (flag == 1) ++n;
        std::cout << "n: " << n << std::endl;
        // fuck damn O(sqrt(n))
        for (int i=0; i<n; ++i)
        {
            for (int j=i+1; j<n+1; ++j)
            {
                if (numbers[i] + numbers[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};


int main()
{   
    // std::vector<int> numbers {-1, 0};
    std::vector<int> numbers {-3, 3, 4, 90};
    Solution s;
    int target = 94;
    std::vector<int> ans;
    ans = s.twoSum(numbers, target);
    for (int i=0; i<ans.size(); ++i)
        std::cout << ans[i] << std::endl;
    std::cin.get();
}