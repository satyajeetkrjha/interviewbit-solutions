/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool symmetric(TreeNode *a, TreeNode *b){
	if(a==NULL && b==NULL){
		return true;
	}
	if(a==NULL ||  b==NULL){
		return false;
	
	}
	if(a->val==b->val){
		if(symmetric(a->right,b->left)&& symmetric(a->left ,b->right))
		return true;
	}
	return false;
}
int Solution::isSymmetric(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    bool ans=symmetric(A,A);
    if(ans==true)
    return 1;
    else
    return 0;
}
