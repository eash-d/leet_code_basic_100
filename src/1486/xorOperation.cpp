# include <iostream>
# include <vector>

// 给你两个整数，n 和 start 。
// 数组 nums 定义为：nums[i] = start + 2*i（下标从 0 开始）且 n == nums.length 。
// 请返回 nums 中所有元素按位异或（XOR）后得到的结果。


class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        for (int i=0; i<n; ++i)
        {
            ans = start ^ ans;
            start += 2;
        }
        return ans;
    }
};

//执行结果：
// 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗：5.7 MB, 在所有 C++ 提交中击败了91.15%的用户
// 通过测试用例：54 / 54

int main()
{
    int r;
    Solution s;
    int n=5, start=0;
    // int n=4, start=3;
    r = s.xorOperation(n, start);
    std::cout << r << std::endl; 
    std::cin.get();
}