/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* invertTree(struct TreeNode* root){
    if(!root) return root;
    struct TreeNode *L=invertTree(root->left);
    struct TreeNode *R=invertTree(root->right);
    root->right=L;
    root->left=R;
    return root;
}
