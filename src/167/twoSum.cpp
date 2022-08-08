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
                return {++l, ++r};
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



    std::cin.get();
}