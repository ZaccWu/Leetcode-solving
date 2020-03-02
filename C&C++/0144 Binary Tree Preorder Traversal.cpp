/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
   
    int *result;
    int top, count;
    struct TreeNode **stack;    /* stack points to the node */
    struct TreeNode  *current;  /* current points to the node's value */
    
    result = malloc(100 * sizeof(int));
    stack  = malloc(100 * sizeof(struct TreeNode *));
    top    = 0;
    count  = 0;
    current = root;
    
    while (top > 0 || current != NULL) {  
        while (current != NULL) {
            result[count++] = current->val;
            stack[top++]    = current;
            current = current->left;
        }
        
        current = stack[--top]; 
        /* Here we have arrived the leaf node, so the next step is to go back and search the right one */
        /* The feature of stack will help us to reach this goal easily */
        if (current->right == NULL) {
           current = NULL;
        } else {
           current = current->right;
        }
    }
    
    *returnSize = count;
    return (result);
}
