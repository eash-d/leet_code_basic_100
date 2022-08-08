# include <iostream>
# include <string>
# include <vector>

// 输入：strs = ["flower","flow","flight"]
// 输出："fl"

// 输入：strs = ["dog","racecar","car"]
// 输出：""
// 解释：输入不存在公共前缀。


// 我草你妈这好像最好是要用kmp算法是吧


// void test(std::vector<std::string>& strs)
// {
//     const char* cp[100];
//     std::string result="";
//     char q[100];
//     int l[100];
//     int min = 999;
//     int len = strs.size();

//     // 保存每个字符串和他们对应的length
//     for (int i=0; i<len; i++)
//     {        
//         cp[i] = strs[i].c_str();
//         l[i] = strs[i].length();
//     }
    
//     // 求所有字符串里面的最小长度
//     for (int i=0; i<len; i++)
//     {
//         if (l[i] < min)
//         {
//             min = l[i];
//         }
//     }

//     int num=0;
//     // 保存所有有效字母
//     for (int i=0; i<min; i++)
//     {
//         for (int j=0; j<len; j++)
//         {
//             q[num] = cp[j][i];
//             ++num;
//         }
//     }

//     // 找公共前缀
//     int flag = 1;
//     for (int i=0; i<num; i+=len)
//     {
//         if (i>0 && flag ==1)
//         {
//             result += q[i-1];

//         }
//         char r = q[i];
//         for (int j=i+1; j<i+len; j++)
//         {
//             if (flag != 0)
//             {
//                 if (q[j] == r)
//                 {
//                     r = q[j];
//                 }

//                 else
//                 {
//                     flag = 0;
//                 }
//             }
//         }
//     }

//     std::cout << result << std::endl;

//     // char* x;
//     // x = q;

//     // std::cout << *x << std::endl;
//     // std::cout << *(x+1) << std::endl;

//     // std::cout << *q << std::endl;
//     // std::cout << *(q+1) << std::endl;

//     // std::cout << q << std::endl;
//     // std::cout << &q << std::endl;
//     // std::cout << &(q[1]) << std::endl;
//     // char *p;
//     // p = q+1;
//     // if (p==)
// }


class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        const char* cp[99999];
        std::string result="";
        char q[99999];
        int l[99999];
        int min = 999;
        int len = strs.size();

        // 输入：["a"], 输出："", 预期结果："a"
        if (len == 1)
        {
            return strs[0];
        }

        // 保存每个字符串和他们对应的length
        for (int i=0; i<len; i++)
        {        
            cp[i] = strs[i].c_str();
            l[i] = strs[i].length();
        }

        // 求所有字符串里面的最小长度
        for (int i=0; i<len; i++)
        {
            if (l[i] < min)
            {
                min = l[i];
            }
        }

        int num=0;
        // 保存所有有效字母
        for (int i=0; i<min; i++)
        {
            for (int j=0; j<len; j++)
            {
                q[num] = cp[j][i];
                ++num;
            }
        }

        // 创建模式串
        char k[99999];
        for (int i=0; i<num; i+=len)
        {
            char r = q[i];
            for (int j=i; j<i+len; j++)
            {
                k[j] = r;
            }
        }

        // std::cout << *(k) << std::endl;

        // 用模式串匹配公共前缀
        int count = 0;
        for (int i=0; i<num; i++)
        {
            
            if (k[i] == q[i])
            {
                ++count;
                if (count == len)
                {
                    result += k[i];
                    count = 0;
                }
            }
            else
            {
                return result;
            }
        }
        return result;
    }
};

int main()
{

    std::vector<std::string> strs;
    strs.push_back("a");
    strs.push_back("ab");
    // test(strs);
    Solution s;
    std::string x;
    x = s.longestCommonPrefix(strs);
    std::cout << x << std::endl;

    std::cin.get();
}

// 傻逼题目纯恶心人，数组要开到五位数 [22222]

// 执行用时：4 ms, 在所有 C++ 提交中击败了64.75%的用户
// 内存消耗：9 MB, 在所有 C++ 提交中击败了44.11%的用户