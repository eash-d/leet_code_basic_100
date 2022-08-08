# include <iostream>
# include <string>
# include <algorithm>

/*
给定一个字符串 s ，验证 s 是否是 回文串 ，**只考虑字母和数字字符**，可以忽略字母的大小写。
本题中，将空字符串定义为有效的 回文串 。

 输入: s = "A man, a plan, a canal: Panama"
输出: true
解释："amanaplanacanalpanama" 是回文串

输入: s = "race a car"
输出: false
解释："raceacar" 不是回文串
*/

class Solution {
public:
    bool isPalindrome(std::string s) {
        int n = s.size();
        std::string strs;
        for (int i=0; i<n; ++i)
        {
            if ( (s[i] > 64) && (s[i] < 91))
                strs.push_back(s[i] + 32);
            else if ( (s[i] > 96) && (s[i] < 123))
                strs.push_back(s[i]);
            else if ((s[i] > 47) && (s[i] < 58))
                strs.push_back(s[i]);
            else    continue;
        }

        int m = strs.size();
        int i=0, j=m-1;

        while (i<j)
        {
            if (strs[i] != strs[j])
            {
                return false;
            }
            else
            {
                ++i;
                --j;
            }
        }
        return true;
    }
};


int main()
{
    std::string str = "race a car";
    Solution s;
    bool ans;
    ans = s.isPalindrome(str);
    std::cout << ans << std::endl;

    std::cin.get();
}