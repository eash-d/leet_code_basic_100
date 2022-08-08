# include <iostream>
# include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int l=0, r = numbers.size()-1;
        while (l<r)
        {
            int v = numbers[l] + numbers[r];
            if (v == target)
                return {l, r};
            else if (v > target)
                --r;
            else
                ++l;
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


