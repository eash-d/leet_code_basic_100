# include <iostream>

// 递归乘法。 写一个递归函数，不使用 * 运算符， 实现两个正整数的相乘。可以使用加号、减号、位移，但要吝啬一些。

class Solution {
public:
    int multiply(int A, int B) {
        int mx = std::max(A, B);
        int mn = std::min(A, B);

        if (mn == 0)
        {
            return 0;
        }
        // A(大)*B(小) = A+A+A+...+A(做B次)
        // 转化成加法，次数=B，每次-1
        // 也就是说递归栈的数量=B 
        // 假如B=3，那3-1=2, 2-1=1, 1-1=0 就是三次，因为我考虑乘0的情况嘛，肯定是要0
        // 0+A = A, A+A=2A, 2A+A=3A, 递归嘛，反过来看的话   
        return multiply(mn-1, mx) + mx;
    }
};

int main()
{
    Solution s;
    int a=3, b=4, r;
    r = s.multiply(a, 4);

    std::cout << r << std::endl;
    std::cin.get();
}