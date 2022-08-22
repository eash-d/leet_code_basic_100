# include <iostream>
# include <cmath>

// https://leetcode.cn/problems/er-cha-shu-de-shen-du-lcof/

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        else
        {
            return std::max( maxDepth(root->left)+1, maxDepth(root->right)+1 );
        }
    }
};


int main()
{
    TreeNode *n9 = new TreeNode(9);
    TreeNode *n15 = new TreeNode(15);
    TreeNode *n7 = new TreeNode(7);
    TreeNode *n20 = new TreeNode(20);
    TreeNode *n3 = new TreeNode(3);

    n20->left = n15;
    n20->right = n7;
    n3->left = n9;
    n3->right = n20;

    Solution s;
    int ans = s.maxDepth(n3);

    std::cout << ans << std::endl;

}