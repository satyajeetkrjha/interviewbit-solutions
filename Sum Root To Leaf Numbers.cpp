/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int res;
void dfs(TreeNode* root,int cur){
	if(root==NULL)
	return ;
	if(root->left==NULL && root->right==NULL){
		cur=(cur*10+root->val)%1003;
		res=(res+cur)%1003;
	}
	else{
		
		cur=(cur*10+root->val)%1003;
		if(root->right!=NULL)
	      dfs(root->right,cur);
	if(root->left!=NULL)
	dfs(root->left,cur);
	
}
}
int Solution::sumNumbers(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    res=0;
    dfs(A,0);
    return res%1003;
}
