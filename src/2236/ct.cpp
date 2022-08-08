# include <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() 
        // 初始化列表
        : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) 
        : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) 
        : val(x), left(left), right(right) {}
};


class Solution {
public:
    bool checkTree(TreeNode* root) {
        return root->left->val + root->right->val == root->val;
    }
};


int main()
{
    // TreeNode *left = new TreeNode(4);
    // TreeNode *right = new TreeNode(6);
    // TreeNode *root = new TreeNode(10, left, right);
    TreeNode *left = new TreeNode(1);
    TreeNode *right = new TreeNode(3);
    TreeNode *root = new TreeNode(5, left, right);
    Solution s;
    bool ans;
    ans = s.checkTree(root);
    std::cout << ans << std::endl;
}