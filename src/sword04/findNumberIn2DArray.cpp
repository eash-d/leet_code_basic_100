# include <iostream>
# include <vector>

// 在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
// 请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

/*
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
*/


class Solution {
public:
    bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (n==0)   return false;
        int m = matrix[0].size();
        for (int i=0; i<n; ++i)
        {
            if (target > matrix[i][m-1])    continue;
            int l=0, r=m-1, mid;
            while (l<=r)
            {
                mid = (l+r) / 2;
                if (matrix[i][mid] == target)       {return true;}
                else if (matrix[i][mid] < target)   {l = (++mid);}
                else                                {r = (--mid);}
            }
        }
        return false;
    }
};


int main()
{
    Solution s;
    bool ans;
    std::vector<std::vector<int>> matrix 
    {
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    ans = s.findNumberIn2DArray(matrix, target);
    std::cout << ans << std::endl;
 
    std::cin.get();
}


