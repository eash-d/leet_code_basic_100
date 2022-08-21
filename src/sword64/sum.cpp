# include <iostream>

// https://leetcode.cn/problems/qiu-12n-lcof/

class Solution {
public:
    int sumNums(int n) {
        return n*(n+1)/2;
    }
};


int main()
{
    Solution s;
    int ans;
    int n=9;
    ans = s.sumNums(n);
    std::cout << ans << std::endl;

}