/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void recur(struct TreeNode* root, int* count){
    if (root == NULL) return;
    recur(root->left, count);
    *count += 1;
    recur(root->right, count);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){    
    int count = 0;
    int top = -1;
    int i = 0;
    
    recur(root, &count);
    int* out = (int *)malloc(sizeof(int)*(count));
    int** stack = (int *)malloc(sizeof(int*)*(count));
    
    while(root != NULL || top >= 0)
    {
        while(root != NULL)
        {
            top++;
            stack[top] = root;
            root = root->left;
        }
        root = stack[top];
        out[i] = root->val;
        i++;
        top--;
        root = root->right;
    }
    
    *returnSize = count;
    return out;
}
