# include <iostream>

// https://leetcode.cn/problems/qing-wa-tiao-tai-jie-wen-ti-lcof/

class Solution {
public:
    int numWays(int n) {
        int arr[101] = {1, 1};
        for (int i=2; i<n+1; ++i)
            arr[i] = (arr[i-1] + arr[i-2]) % 1000000007;
        return arr[n];
    }
};


int main()
{
    Solution s;
    int n = 7;
    int ans;
    ans = s.numWays(n);
    std::cout <<  ans << std::endl;
}