# include <iostream>
# include <vector>


class Solution {
public:
    int minCount(std::vector<int>& coins) {
        int ret = 0;
        for (int i=0; i<coins.size(); ++i)
        {
            int v = coins[i];
            if (v % 2 == 0)
                ret += v/2;
            else
                ret += (v%2 + v/2);
        }
        return ret;
    }
};

int main()
{
    Solution s;
    std::vector<int> coins {2, 3, 10};
    int ans;
    ans = s.minCount(coins);
    std::cout << ans <<std::endl;
}
