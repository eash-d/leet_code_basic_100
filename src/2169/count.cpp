# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/count-operations-to-obtain-zero/

class Solution {
public:
    int countOperations(int num1, int num2) {
        if (num1 == 0 || num2 == 0)
            return 0;
        else
            return countOperations(abs(num1 - num2), std::min(num1, num2)) + 1;
    }
};


int main()
{
    Solution s;
    int num1 = 2, num2 = 3;

    int ans = s.countOperations(num1, num2);

    std::cout << ans << std::endl;
}
