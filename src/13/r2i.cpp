# include <iostream>
#include <string>

// 字符          数值
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// 例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

// 通常情况下，【罗马数字中小的数字在大的数字的右边】。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

// I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
// X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
// C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。

// 输入: s = "III"
// 输出: 3

// 输入: s = "IX"
// 输出: 9

// 输入: s = "MCMXCIV"
// 输出: 1994
// 解释: M = 1000, CM = 900, XC = 90, IV = 4.

// 题目数据保证 s 是一个有效的罗马数字，且表示整数在范围 [1, 3999] 内

// void test()
// {

// // compare()函数重载较多，其用例主要有：
// // 1、int n = aa.compare(cc);
// // 2、int n = aa.compare(1,2,cc);// 1代表aa的下标，2代表数量 意思为 aa字符串中下标为1开始 字符数量为2的字符串‘bc’与cc相比；
// // 3、int n = aa.compare(1,2,cc,0,2);//意思为 aa字符串中下标为1开始 字符数量为2的字符串‘bc’与cc字符串中下标为0开始 字符数量为2的字符串‘ac’相比；

//     std::string s = "MCMXCIV";
//     int hash[64];
//     // 获得映射后的哈希表
//     for (int i=0; i<s.length(); i++)
//     {
//         switch(s[i])
//         {
//             case 'I': hash[i] = 1; break;
//             case 'V': hash[i] = 5; break;
//             case 'X': hash[i] = 10; break;
//             case 'L': hash[i] = 50; break;
//             case 'C': hash[i] = 100; break;
//             case 'D': hash[i] = 500; break;
//             case 'M': hash[i] = 1000; break;
//             default: break;
//         }
//     }

//     int num = 0;
    
//     for (int i=s.length()-1; i>=0; i-=2)
//     {
//         if (i!=0)
//         {
//             if (hash[i] > hash[i-1])
//             {
//                 num += hash[i] - hash[i-1];
//             }
//             else
//             {
//                 num += hash[i] + hash[i-1];
//             }
//         }
//         else
//         {
//             num += hash[i];
//         } 
//     }
    
//     std::cout << num;

// }

class Solution {
public:
    int romanToInt(std::string s) {
        int hash[64];
        // 获得映射后的哈希表
        for (int i=0; i<s.length(); i++)
        {
            switch(s[i])
            {
                case 'I': hash[i] = 1; break;
                case 'V': hash[i] = 5; break;
                case 'X': hash[i] = 10; break;
                case 'L': hash[i] = 50; break;
                case 'C': hash[i] = 100; break;
                case 'D': hash[i] = 500; break;
                case 'M': hash[i] = 1000; break;
                default: break;
            }
        }
        int num = hash[s.length()-1];
        // 一点点小小的操作
        for (int i=s.length()-1; i>0; i--)
        {     
            if (hash[i] > hash[i-1])
            {
                num -= hash[i-1];
            }
            
            else
            {
                num += hash[i-1];
            }
        }   
        return num;     
    }
};

int main()
{
    // test();
    int n;
    Solution s;
    n = s.romanToInt("MCDLXXVI");
    std::cout << n << std::endl;
    std::cin.get();
}

// 执行用时：4 ms, 在所有 C++ 提交中击败了94.10%的用户
// 内存消耗：5.9 MB, 在所有 C++ 提交中击败了78.81%的用户
// 通过测试用例：3999 / 3999