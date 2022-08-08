# include <iostream>
# include <string>

// 如果所给格子的颜色是白色，请你返回 true，如果是黑色，请返回 false 。
// 给定坐标一定代表国际象棋棋盘上一个存在的格子。坐标第一个字符是字母，第二个字符是数字。
// a = 97    b = 98    c = 99
// a2 = true, b3 = true, a1 = false, d1 = true
// 99 = true, 101 = true, 98 = false, 101 = true
// 奇数true偶数false？
// 1是49，那奇偶性不变

class Solution {
public:
    bool squareIsWhite(std::string coordinates) {
        return ((int(coordinates[0]) + int(coordinates[1])) % 2 == 0 ? false:true); 
    }
};


int main()
{
    Solution s;
    bool r;
    std::string str = "a1";
    r = s.squareIsWhite(str);

    std::cout << r << std::endl;
    std::cin.get();
}