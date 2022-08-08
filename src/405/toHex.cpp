# include <iostream>
# include <string>
# include <algorithm>

// 给定一个整数，编写一个算法将这个数转换为十六进制数。对于负整数，我们通常使用 补码运算 方法。
// 注意:
// 十六进制中所有字母(a-f)都必须是小写。
// 十六进制字符串中不能包含多余的前导零。如果要转化的数为0，那么以单个字符'0'来表示；
// 对于其他情况，十六进制字符串中的第一个字符将不会是0字符。 
// 给定的数确保在32位有符号整数范围内。
// 不能使用任何由库提供的将数字直接转换或格式化为十六进制的方法。


// 这里学到一个东西，就是unsigned int这个语法
// 可以直接把-1的补码1111 1111转成无符号数，也就是 1111 1111 -> 255
class Solution {
public:
    std::string toHex(int num) {
        int remainder;
        int result;
        std::string ans="";
        unsigned int n = num;
        while (1)
        {
            result = n / 16;
            if (result)
            {
                remainder = n % 16;
                if (remainder < 10)
                    ans += remainder+48;
                    // ans.push_back(remainder+48);
                else
                    ans += remainder+87;
                    // ans.push_back(remainder+87);
                n = result;
            }
            else
            {
                if (n < 10)
                    ans += n+48;
                    // ans.push_back(n+48);

                else
                    ans += n+87;
                    // ans.push_back(n+87);
                break;
            }    
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};


int main()
{
    Solution s;
    int num=26;
    std::string ans;
    ans = s.toHex(num);

    std::cout << ans << std::endl;
    std::cin.get();
}