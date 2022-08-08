# include <iostream>
# include <string>

// 输入：s = "We are happy."
// 输出："We%20are%20happy."

class Solution {
public:
    std::string replaceSpace(std::string s) {
        std::string ret;
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i] == 32)
            {    
                ret.push_back(37);
                ret.push_back(50);
                ret.push_back(48);
            }
            else
                ret.push_back(s[i]);
        }
        return ret;
    }
};


int main()
{
    std::string ans;
    std::string s = "We are happy.";
    Solution solution;
    ans = solution.replaceSpace(s);

    std::cout << ans << std::endl;
    std::cin.get();
}