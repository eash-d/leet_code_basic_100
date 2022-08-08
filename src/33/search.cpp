# include <iostream>
# include <vector>
# include <algorithm>

// 整数数组 nums **按升序排列**，数组中的值 互不相同 。
// 在传递给函数之前，nums 在预先未知的某个下标 k（0 <= k < nums.length）上进行了 **旋转**，
// 使数组变为 [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]（下标 从 0 开始 计数）。
//例如， [0,1,2,4,5,6,7] 在下标 3 处经旋转后可能变为 [4,5,6,7,0,1,2] 。
// 给你 **旋转后** 的数组 nums 和一个整数 target ，
// 如果 nums 中存在这个目标值 target ，则返回它的下标，否则返回 -1 。
// 你必须设计一个时间复杂度为 O(log n) 的算法解决此问题。

// 输入：nums = [4,5,6,7,0,1,2], target = 0
// 输出：4

// 1 <= nums.length <= 5000
// -104 <= nums[i] <= 104
// nums 中的每个值都 **独一无二**
// 题目数据保证 nums 在预先未知的某个下标上进行了旋转
// -104 <= target <= 104


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        
        int n = nums.size();
        int ret=-1;
        int n0 = nums[0];
        int k = -1;
        
        // 特殊情况判断
        if (target < n0 && target > nums[n-1]) return -1;
        if (n==1 && target!=n0)                return -1;
        if (n==1 && target==n0)                return 0;
        
        // 排序
        std::sort(nums.begin(), nums.end());

        int i=0, j=n-1;
        while (i <= j)
        {
            int mid = ( (i+j) / 2 );
            
            if ( nums[mid] == target )      {ret = mid; break;}
            else if(nums[mid] < target)      i = ++mid;
            else                             j = --mid;      
        }
        std::cout << ret << std::endl;
        // 如果最后ret==-1，说明没有找到目标值
        if (ret==-1)  return-1;

        i = 0;
        j = n-1;

        while (i <= j)
        {
            int mid = ( (i+j) / 2 );
            if ( nums[mid] == n0 )           {k = mid; break;}    
            else if(nums[mid] < n0)           i = ++mid;
            else                              j = --mid;   
        }
        std::cout << k << std::endl;
        // k的意义是整个数组循环移动了k次
        // 偏移量
        ret = ( ret + (n-k) ) % n ;

        return ret;
    }
};


int main()
{
    Solution s;
    int target = 3;
    int ans;
    std::vector<int> nums {3,1};
    ans = s.search(nums, target);
    std::cout << ans << std::endl;
    std::cin.get();
}
