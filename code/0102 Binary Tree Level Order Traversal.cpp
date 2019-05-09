/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

/* First we need to figure out the depth of the Binary Tree */
int TreeDepth(struct TreeNode* root){
    if(!root) return 0;
    int leftDepth=TreeDepth(root->left)+1;
    int rightDepth=TreeDepth(root->right)+1;
    return leftDepth>rightDepth?leftDepth:rightDepth;
}

void getLevelValue(int ** levelArray, struct TreeNode* root, int* columnSizes, int level){
    if(root==NULL) return ;
    
    columnSizes[level]++;
    levelArray[level] = (int *)realloc(levelArray[level], columnSizes[level]*sizeof(int));
    levelArray[level][columnSizes[level] - 1] = root->val;
        
    getLevelValue(levelArray, root->left, columnSizes, level+1);
    getLevelValue(levelArray, root->right, columnSizes, level+1);
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** ColumnSizes){
    if(returnSize == NULL)
        return NULL;
    if(root == NULL){
        *returnSize = 0;
        return NULL;
    }
    *returnSize = TreeDepth(root);
    int ** levelArray = (int **)calloc(*returnSize, sizeof(int*));
    *ColumnSizes = (int *)calloc(*returnSize, sizeof(int));
    getLevelValue(levelArray, root, *ColumnSizes, 0);
    return levelArray;
}
