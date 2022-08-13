# include <iostream>
# include <vector>

// https://leetcode.cn/problems/GzCJIP/


class Solution {
    // 爬到第i层楼梯时的体力花费
    int arr[1099] = {0, 0};
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int n = cost.size();
        for (int i=2; i<n; ++i)
        {
            int v1 = arr[i-2] + cost[i-2];
            int v2 = arr[i-1] + cost[i-1];
            int v = std::min(v1, v2);
            arr[i] = v;
        }
        return std::min(arr[n-1]+cost[n-1], arr[n-2]+cost[n-2]);
    }   
};


int main()
{
    std::vector<int> cost {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    Solution s;
    int ans;
    ans = s.minCostClimbingStairs(cost);
    std::cout << ans << std::endl;
}
