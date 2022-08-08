# include <iostream>
# include <string>

// 字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
// 请定义一个函数实现字符串左旋转操作的功能。
// 比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。


class Solution {
public:
    std::string reverseLeftWords(std::string s, int n) {
        // 循环队列嘛这不
        int k = s.size();
        std::string r;
        for (int i=0; i<k; ++i)
        {
            r += s[(i+n) % k];
        }
        return r;
    }
};


int main()
{
    Solution s;
    std::string str = "abcdefg";
    std::string r;
    int n = 2;
    r = s.reverseLeftWords(str, n);

    std::cout << r << std::endl;
    std::cin.get();
}