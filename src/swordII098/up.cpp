# include <iostream>

// https://leetcode.cn/problems/2AoeFn/

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         //递归居然超时了,可恶啊！
//         if (m == 1 || n == 1)
//             return 1;
//         else
//             return uniquePaths(m, n-1) + uniquePaths(m-1, n);
//     }
// };


class Solution {
public:
    int uniquePaths(int m, int n) {
        // if (m < n)
        // {
        //     m = m ^ n;
        //     n = m ^ n;
        //     m = m ^ n;
        // }
        int k[101][101];
        for (int i=0; i<m; ++i)
            for (int j=0; j<n; ++j)
            {
                if (i==0 || j==0) 
                    k[i][j] = 1;
                else
                    k[i][j] = k[i-1][j] + k[i][j-1]; 
            }
        return k[m-1][n-1];
    }
};


int main()
{
    Solution s;
    int ans;
    ans = s.uniquePaths(3, 7);
    std::cout << ans << std::endl;
}