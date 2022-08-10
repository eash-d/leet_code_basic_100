# include <iostream>
# include <string> 


// 输入：s = "foobar", letter = "o"
// 输出：33
// 解释：
// 等于字母 'o' 的字符在 s 中占到的百分比是 2 / 6 * 100% = 33% ，向下取整，所以返回 33 。


class Solution {
public:
    int percentageLetter(std::string s, char letter) {
        int count = 0;
        int lt = int(letter);
        int n = s.size();
        for (int i=0; i<n; ++i)
            if (int(s[i]) == lt)    ++count;
        return (count*1.0 / n) * 100;
    }   
};


int main()
{
    std::string str = "foobar";
    char letter = 'o';
    Solution s;
    int ans;
    ans = s.percentageLetter(str, letter);
    std::cout << ans << std::endl;
}