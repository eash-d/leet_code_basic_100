# include <iostream>

// 这题我理解，其实就是看有几个位不同，那就是至少要翻转几次
// 那思路就很清晰了，先做异或操作，然后用与和右移判断有几个1那就说明要翻转多少次

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int val = start ^ goal;
        int count = 0;
        
        while (val)
        {
            if (val&1)  ++count;
            val >>= 1;
        }

        return count;
    }
};


int main()
{
    int start = 3, goal = 4;
    int ans;
    Solution s;
    ans = s.minBitFlips(start, goal);
    std::cout << ans << std::endl;
    std::cin.get();
}