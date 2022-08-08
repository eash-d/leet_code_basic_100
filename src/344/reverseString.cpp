# include <iostream>
# include <vector>

// 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
// 不要给另外的数组分配额外的空间，你必须 **原地修改输入数组、使用 O(1) 的额外空间** 解决这一问题。


class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int lp=0, rp=s.size()-1;
        while (lp < rp)
        {
            s[lp] = s[lp] ^ s[rp];
            s[rp] = s[lp] ^ s[rp];
            s[lp] = s[lp] ^ s[rp];
            ++lp;
            --rp; 
        }
    }
};


int main()
{
    std::vector<char> s {'h','e','l','l','o'};
    Solution slt;
    slt.reverseString(s);
    for (int i=0; i<s.size(); ++i)
        std::cout << s[i] << std::endl;
    std::cin.get();

}