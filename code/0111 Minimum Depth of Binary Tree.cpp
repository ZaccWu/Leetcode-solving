/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
	if(NULL==root) return 0;
    
	int LeftDepth=minDepth(root->left);
	int RightDepth=minDepth(root->right);
    if(root->left!=0 && root->right!=0){
        return LeftDepth<RightDepth? LeftDepth+1 : RightDepth+1;
    }
	return LeftDepth>RightDepth? LeftDepth+1 : RightDepth+1;/* One branch is NULL */
}

