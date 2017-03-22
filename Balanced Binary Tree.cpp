/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int balanced (TreeNode *root){
	// step1 
	if(root==NULL)
	return 0;
	// step2
	int lh=balanced(root->left);
	if(lh==-1){
		return -1;
	}
	// step3
	int rh=balanced(root->right);
	if(rh==-1){
		return -1;
	}
	// step4
	int diff=abs(rh-lh);
	if(diff>1)
	return -1;
	// step 5
	return (max(lh,rh)+1);
}
int Solution::isBalanced(TreeNode* A) {
    int ans=balanced(A);
    if(ans==-1)
    return 0;
    else
    return 1;
}
