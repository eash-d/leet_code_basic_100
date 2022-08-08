# include <iostream>
# include <vector>
# include <algorithm>

// 已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次 旋转 后，得到输入数组。
// 例如，原数组 nums = [0,1,2,4,5,6,7] 在变化后可能得到：
// 若旋转 4 次，则可以得到 [4,5,6,7,0,1,2]
// 若旋转 7 次，则可以得到 [0,1,2,4,5,6,7]
// 注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1], a[0], a[1], a[2], ..., a[n-2]] 。
// 给你一个元素值 互不相同 的数组 nums ，它原来是一个升序排列的数组，并按上述情形进行了多次旋转。
// 请你找出并返回数组中的 最小元素 。
// 你必须设计一个时间复杂度为 O(log n) 的算法解决此问题。

// 其实他旋转4次就是右移4次嘛，那顺序数组右移四次得到原数组，4这个值怎么找
// 其实不就是找 原数组[0]=4 这个位置的数变换之后的index是多少，而在顺序数组中的4是[3]，可以知道是顺序数组左移3位
// 也就是顺序数组右移size-3位得到原数组

// 我草我在想他妈呢？


class Solution {
public:
    int findMin(std::vector<int>& nums) {
        int ret;
        std::vector<int> nm;  
        nm = nums;
        std::sort(nm.begin(), nm.end());
        ret = nm[0];
        return ret;
    }
};


int main()
{
    Solution s;
    int ans;
    std::vector<int> nums {3,4,5,1,2};
    ans = s.findMin(nums);
    std::cout << ans << std::endl;
    std::cin.get();
}
