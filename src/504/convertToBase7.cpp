# include <iostream>
# include <string>
# include <algorithm>
// 输入: num = 100
// 输出: "202"
// 输入: num = -7
// 输出: "-10"


class Solution {
public:
    std::string convertToBase7(int num) {
        std::string ret = "";
        int n = num;
        if (num<0)  {n = -num;    ret += 45;}
        else if (num == 0)       {ret += 48;}
        while (n)
        {
            ret += ( (n % 7) + 48 ); 
            n /= 7;
        }
        
        if (num < 0)    std::reverse(ret.begin()+1, ret.end());
        else            std::reverse(ret.begin(), ret.end());
        
        return ret;
    }
};


int main()
{
    std::string ans;
    Solution s;
    int num = -7;  // num = -7
    ans = s.convertToBase7(num);
    std::cout << ans << std::endl;
    std::cin.get();
}


// 执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
// 内存消耗：5.6 MB, 在所有 C++ 提交中击败了98.67%的用户
