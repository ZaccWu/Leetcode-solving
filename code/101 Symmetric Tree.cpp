/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checknode(struct TreeNode* left,struct TreeNode* right){
    if(left==NULL && right==NULL) return true;
    if((left!=NULL && right==NULL)||(left==NULL && right!=NULL)) return false;
    if(left->val!=right->val) return false;
    return(checknode(left->left,right->right) && checknode(left->right,right->left));
}

bool isSymmetric(struct TreeNode* root) {
    if(root==NULL) return true;
    return(checknode(root->left,root->right));
}
