/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */int minimum(TreeNode *root){
	if(root==NULL){
		return 0;
	}
  if(root->left==NULL && root->right==NULL){// leaf node 
  	return 1;
  }
  if(root->left==NULL)
  return minimum(root->right)+1;
  	if(root->right==NULL)
  		return minimum(root->left)+1;
  		return min(minimum(root->left),minimum(root->right))+1;
	  }
 
int Solution::minDepth(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=minimum(A);
    return ans;
}
