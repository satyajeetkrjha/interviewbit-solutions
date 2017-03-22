/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
 vector <int> v;
 TreeNode* balanced(TreeNode* root,int start,int end){
     if(start>end ) return NULL;// 
     int mid=(start+end)/2;
     root=new TreeNode(v[mid]);
     root->left=balanced(root->left,start,mid-1);
     root->right=balanced(root->right,mid+1,end);
     return root;
 }
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    v=A;
    TreeNode* root=NULL;
   TreeNode *ans=balanced(root,0,A.size()-1);
    return ans;
}
