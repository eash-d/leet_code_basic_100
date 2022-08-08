# include <iostream>

// 例如，反转 2021 得到 1202 。反转 12300 得到 321 ，不保留前导零 。

// 给你一个整数 num ，反转 num 得到 reversed1 ，接着反转 reversed1 得到 reversed2 。如果 reversed2 等于 num ，
// 返回 true ；否则，返回 false 。


// 1234 % 10 = 4         123 % 10 = 3
// 1234 / 10 = 123       123 /10 = 12

// class Solution {
// public:
//     bool isSameAfterReversals(int num) {
//         int remainder;
//         int count = 0;
//         // 当不是个位数的时候
//         while(num/10 != 0)
//         {
//             remainder = num % 10;
//             num = num / 10;
//             if (remainder == 0 && count == 0)
//                 return false;
//             ++count;
//         }
        
//         // 个位数反转两次一定一样，或者是
//         return true;
//     }
//     // 执行用时： 0 ms , 在所有 C++ 提交中击败了 100.00% 的用户 
//     // 内存消耗： 5.7 MB , 在所有 C++ 提交中击败了 77.97% 的用户 
//     // 通过测试用例： 129 / 129
// };


class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        if(num%10 == 0 && num > 9)
        {
            return false;
        }
        return true;
    }
};


int main()
{
    Solution s;
    bool r;
    int num=1800;
    r = s.isSameAfterReversals(num);

    std::cout << r << std::endl;    
    std::cin.get();
}