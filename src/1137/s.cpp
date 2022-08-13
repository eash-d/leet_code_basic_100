# include<iostream>

// https://leetcode.cn/problems/n-th-tribonacci-number/

class Solution {
    int f[40] = {0, 1, 1};
public:
    int tribonacci(int n) {
        for (int i=3; i<n+1; ++i)
            f[i] = f[i-1] + f[i-2] + f[i-3];
        return f[n];
    }
};


int main()
{
    int n = 25;
    Solution s;
    int ans;
    ans = s.tribonacci(n); 
    std::cout << ans <<std::endl;
}