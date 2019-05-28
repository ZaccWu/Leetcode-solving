
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void FindDepthandParent(struct TreeNode* root,int x,int depth,int parent,int *depthx,int *parentx){
    if (!root) return;
    if (root->val==x){
        *depthx=depth;
        *parentx=parent;
        return;
    }
    FindDepthandParent(root->left,x,depth+1,root->val,depthx,parentx);
    FindDepthandParent(root->right,x,depth+1,root->val,depthx,parentx);
}
bool isCousins(struct TreeNode* root, int x, int y){
    if(!root) return false;
    int depthx=0;int depthy=0;
    int parentx=root->val;int parenty=root->val;
    FindDepthandParent(root,x,0,0,&depthx,&parentx);
    FindDepthandParent(root,y,0,0,&depthy,&parenty);
    return depthx==depthy&&parentx!=parenty;
}
    
