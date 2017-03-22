/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 vector <int> inoder(TreeNode *root){
     vector <int> res;
	stack <TreeNode*> st;// create a stack
	bool done=false;// done is initillaly false and it will become true when stack is empty
TreeNode *cur=root;
	while(done==false){
		if(cur!=NULL){
			st.push(cur);
			cur=cur->left;
		}
		else{
			if(st.empty()==true){
				done=true;//
			   }
			else{
			cur=st.top();
			st.pop();
				res.push_back(cur->val);
				
				cur=cur->right;
				
			}
		}
	}
	return res;
	
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
   vector <int> ans= inoder(A);
    return ans;
}
