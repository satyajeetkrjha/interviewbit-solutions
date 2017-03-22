/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int sum) {

if(A==NULL) return false;

    int subsum=sum-A->val;
    if(subsum==0 && A->right==NULL && A->left==NULL){
        return true;
    }
    return (hasPathSum(A->left,subsum)|| hasPathSum(A->right,subsum));
}

