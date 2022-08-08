# include <iostream>
# include <vector>

// 输入：accounts = [[1,2,3],[3,2,1]]
// 输出：6
// 解释：
// 第 1 位客户的资产总量 = 1 + 2 + 3 = 6
// 第 2 位客户的资产总量 = 3 + 2 + 1 = 6
// 两位客户都是最富有的，资产总量都是 6 ，所以返回 6 。

// 输入：accounts = [[1,5],[7,3],[3,5]]
// 输出：10
// 解释：
// 第 1 位客户的资产总量 = 6
// 第 2 位客户的资产总量 = 10 
// 第 3 位客户的资产总量 = 8
// 第 2 位客户是最富有的，资产总量是 10


class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int n = accounts.size();
        int max_money = -1;
        for (int i=0; i<n; ++i)
        {
            int money = 0;
            for (int j=0; j<accounts[i].size(); ++j)
            {
                money += accounts[i][j]; 
            }
            max_money = std::max(money, max_money);
        }
        return max_money;   
    }
};


int main()
{
    std::vector<std::vector<int>> account { {1,2,3},{3,2,1} };
    Solution s;
    int ans;
    ans = s.maximumWealth(account);
    std::cout << ans << std::endl;
    std::cin.get();
}