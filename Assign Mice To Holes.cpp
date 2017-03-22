int Solution::mice(vector<int> &A, vector<int> &B) {
   int n=A.size();
   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
   int ans=0;
   for(int i=0;i<n;i++){
       ans=max(ans,abs(A[i]-B[i]));
   }
   return ans;
}
