/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode *root) {
	if(NULL==root) return 0;
    
	int LeftDepth=maxDepth(root->left);
	int RightDepth=maxDepth(root->right);

	return LeftDepth>RightDepth? LeftDepth+1 : RightDepth+1;
}

