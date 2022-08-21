# include <iostream>
# include <string>

// https://leetcode.cn/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
    char stack[110];
    int sp = 0;
public:
    int maxDepth(std::string s) {
        int cnt = 0;
        int ans = 0;
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i] == 40 || s[i] == 41)
            {
                stack[sp] = s[i];
                ++sp;
            }
        }

        for (int i=0; i<sp; ++i)
        {
            if (stack[i] == 40) 
            {
                ++cnt;
                if (cnt > ans)
                    ans = cnt;
            }
            else
                --cnt;
        }
        
        return ans;
    }
};


int main()
{
    std::string s = "(1+(2*3)+((8)/4))+1";
    Solution slt;
    int ans = slt.maxDepth(s);
    std::cout << ans << std::endl;

}