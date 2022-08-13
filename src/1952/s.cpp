# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/three-divisors/

// 就是n/m=k，m就是n的一个正除数，那反过来k也是n的正除数啊
// 那就是说其实是要求这里的m=k,
// 除了1和n以外，有且只有一个开平方的数
// 那那那那那那  哦哦哦哦哦
class Solution {
public:
    bool isThree(int n) {
        int nn = std::sqrt(n);
        if (n==1) return false;

        if ( std::sqrt(n) != nn )
            return false;

        else
            for (int i=2; i<nn; ++i)
                if (nn % i == 0)
                    return false;

        return true;
    }
};


int main()
{
    Solution s;
    int n = 4;
    bool ans;
    ans = s.isThree(n);
    std::cout << ans << std::endl;
}