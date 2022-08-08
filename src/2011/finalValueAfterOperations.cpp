# include <iostream>
# include <vector>
# include <string>

// 存在一种仅支持 4 种操作和 1 个变量 X 的编程语言：

// ++X 和 X++ 使变量 X 的值 加 1
// --X 和 X-- 使变量 X 的值 减 1
// 最初，X 的值是 0

// 给你一个字符串数组 operations ，这是由操作组成的一个列表，返回执行所有操作后， X 的 最终值 。


class Solution {
public:
    int finalValueAfterOperations(std::vector<std::string>& operations) {
        int x=0;

        for (int i=0; i<operations.size(); ++i)
        {
            if (operations[i][1] == 43)        ++x;
            else if (operations[i][1] == 45)   --x;
            else    return -1;
        }
        return x;
    }
};


int main()
{
    Solution s;
    int ans;
    std::vector<std::string> op {"--X","X++","X++"};
    ans = s.finalValueAfterOperations(op);
    std::cout << ans << std::endl;
    std::cin.get();
}