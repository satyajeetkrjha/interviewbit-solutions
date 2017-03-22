
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector <int> res;
   if (!root){return res;}
  stack <TreeNode*> st;
  st.push(root);
  while(!st.empty()){
      TreeNode* temp1=st.top();
      res.push_back(temp1->val);
      st.pop();
        if(temp1->right!=NULL)
      st.push(temp1->right);
      if(temp1->left!=NULL)
      st.push(temp1->left);
    
  }
  return res;
}
