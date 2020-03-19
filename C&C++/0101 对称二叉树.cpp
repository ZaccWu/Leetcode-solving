/*
请实现一个函数，用来判断一棵二叉树是不是对称的。如果一棵二叉树和它的镜像一样，那么它是对称的。

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//和翻转二叉树类似，这个也是要用递归的方法
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
