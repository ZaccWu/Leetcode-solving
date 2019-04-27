/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#define MAX(a,b) ((a>b)?a:b)
int Balanced(struct TreeNode* root) {
    int left, right, diff;
    if (root==NULL) return 0;
    
    right = Balanced(root->right);
    left = Balanced(root->left);
    if (right == -1 || left == -1) return -1;
        
    diff = (right > left) ? right - left : left -right;
    if (diff > 1) return -1;
    else return 1 + MAX(left, right);
        
}

bool isBalanced(struct TreeNode* root) {
    return (Balanced(root) != -1);
}
