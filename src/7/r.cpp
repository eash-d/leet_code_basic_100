# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/reverse-integer/

class Solution {
    int queue[20];
    int f = 0, r = 0;
public:
    int reverse(int x) {
        int remainder;
        int ans = 0;
        while(x)
        {
            remainder = x % 10;
            queue[f] = remainder;
            ++f;
            x /= 10;
        }
        while (r < f)
        {
            if ( ( ans + (queue[r] * std::pow(10, f-r-1)) > (std::pow(2, 31) - 1) ) ||
                 ( ans + (queue[r] * std::pow(10, f-r-1)) < -(std::pow(2, 31)) ) )
                return 0;

            ans += queue[r] * std::pow(10, f-r-1);
            ++r;
        }
        return ans;
    }
};


int main()
{
    Solution s;
    int x = 123;
    int ans = s.reverse(x);
    std::cout << ans << std::endl;
}