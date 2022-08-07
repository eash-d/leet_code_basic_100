# include <iostream>
# include <vector>

// 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
// 写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int l=0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (l+r) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = ++mid;
            else
                r = --mid; 
        }
        return -1;
    }
};


int main()
{
    Solution s;
    std::vector<int> nums {-1,0,3,5,9,12};
    int target = 2;
    int ans;
    ans = s.search(nums, target);
    std::cout << ans << std::endl;
    std::cin.get();
}