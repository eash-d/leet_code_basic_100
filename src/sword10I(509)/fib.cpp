# include <iostream>

// https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof/


// class Solution {
// public:
//     int fib(int n) {
//         if (n < 2)    return n;
//         // else if (n == 1)    return 1;
//         else                return (fib(n-1) + fib(n-2)); 
//     }
// };

// 这个东西其实看问题规模
// 比如509那题就可以用递归，因为最多只到30，问题规模其实很小
// 这题规模比较大，显然就不能用，都行都行


class Solution {
public:
    int fib(int n) {
        int arr [101];
        arr[0] = 0;
        arr[1] = 1;
        for (int i=2; i<n+1; ++i)
            arr[i] = (arr[i-1] + arr[i-2]) % 1000000007;
        return arr[n];
    }
};


int main()
{
    int n = 45;
    Solution s;
    int ans;
    ans = s.fib(n);
    std::cout << ans << std::endl;
}