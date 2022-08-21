# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/count-of-matches-in-tournament/

class Solution {
public:
    int numberOfMatches(int n) {
        if (n == 2)
            return 1;
        else if (n == 1)
            return 0;
        else
            return numberOfMatches(std::ceil(n*1.0/2)) + n/2;
    }
};


int main()
{
    Solution s;
    int n = 7;
    int ans = s.numberOfMatches(n);
    std::cout << ans << std::endl;

}