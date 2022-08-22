# include <iostream>

// https://leetcode.cn/problems/range-sum-of-bst/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// class Solution {
//     int count = 0;
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if ( root == nullptr )
//             return 0;
//         else
//         {
//             if ( (root->val >= low) && (root->val <=high) )
//                 count += root->val;
//             int x = rangeSumBST(root->left, low, high);
//             int y = rangeSumBST(root->right, low, high);
//         }
//         return count;
//     }
// };

/* 我草，两种写法时空复杂度几乎一样，我真是你妈傻逼 */

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if ( !root )
            return 0;

        else
        {
            int sum = rangeSumBST(root->left, low, high)
                                        + 
                      rangeSumBST(root->right, low, high);
            
            if ( (root->val >= low) && (root->val <= high) )
                sum += root->val;
            return sum;
        }
    }
};


int main()
{
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n7 = new TreeNode(7);
    TreeNode *n18 = new TreeNode(18);
    TreeNode *n5 = new TreeNode(5, n3, n7);
    TreeNode *n15 = new TreeNode(15, nullptr, n18);
    TreeNode *n10 = new TreeNode(10, n5, n15);

    Solution s;
    int low=7, high=15;
    int ans = s.rangeSumBST(n10, low, high);
    std::cout << ans << std::endl;
}