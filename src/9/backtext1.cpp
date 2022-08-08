# include <iostream>

// 输入：x = 121
// 输出：true

// 输入：x = -121
// 输出：false

// 输入：x = 10
// 输出：false
// 解释：从右向左读, 为 01 。因此它不是一个回文数。

void test()
{
    int num = 10;
    char s[20];
    snprintf(s, sizeof(s), "%d", num);
    // std::cout << sizeof(s) << std::endl;
    // std::cout << sizeof(char) << std::endl;
    char *sp;
    sp = s;
    std::cout << *sp << std::endl;
    ++sp;
    std::cout << *sp << std::endl;
    ++sp;
    if ((*sp) != '\0')
    {
        std::cout << "haha" << std::endl;
    }
    else
    {
        std::cout << sp << std::endl;
    }

    // std::cout << length << std::endl;
    // std::cout << s[0] << std::endl;
}

class Solution {
public:
    bool isPalindrome(int x) {
        char s[64];
        char *sq;
        sq = s;
        snprintf(s, sizeof(s), "%d", x);
        int len = 0;
        // 遍历找长度
        while ((*sq) != '\0')
        {
            ++sq;
            ++len;
        }
        for (int i=0, j=len-1; i<len/2; i++,j--)
        {
            if (s[i] != s[j])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    bool b;
    b = s.isPalindrome(121);
    std::cout << b << std::endl;
    // test();
    std::cin.get();
}

// 执行用时：4 ms, 在所有 C++ 提交中击败了94.57%的用户
// 内存消耗：5.7 MB, 在所有 C++ 提交中击败了78.52%的用户
// 通过测试用例：11510 / 11510