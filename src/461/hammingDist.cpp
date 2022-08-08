# include <iostream>


// 输入：x = 1, y = 4
// 输出：2
// 解释：
// 1   (0 0 0 1)
// 4   (0 1 0 0)
//        ↑   ↑
// 上面的箭头指出了对应二进制位不同的位置。


class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int count = 0;
        while (z)
        {
            if (z&1)    ++count;
            z >>= 1;            
        }
        return count;
    }
};


int main()
{
    Solution s;
    int x, y, ans;
    x=3;
    y=1;
    ans = s.hammingDistance(x, y);

    std::cout << ans << std::endl;
    std::cin.get();
}