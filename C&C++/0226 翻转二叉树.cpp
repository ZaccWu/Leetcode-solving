/*
翻转一棵二叉树。

示例：
输入：

     4
   /   \
  2     7
 / \   / \
1   3 6   9
输出：

     4
   /   \
  7     2
 / \   / \
9   6 3   1
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//基本功，此题最简洁的方法就是递归
struct TreeNode* invertTree(struct TreeNode* root){
    if(!root) return root;
    struct TreeNode *L=invertTree(root->left);
    struct TreeNode *R=invertTree(root->right);
    root->right=L;
    root->left=R;
    return root;
}
