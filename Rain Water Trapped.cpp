int Solution::trap(const vector<int> &A) {
   int n=A.size();
   int maxleft[n+5];
   int maxright[n+5];
   maxleft[0]=A[0];
   maxright[n-1]=A[n-1];
   for(int i=1;i<n;i++){
       maxleft[i]=max(maxleft[i-1],A[i]);
   }
   for(int i=n-2;i>=0;i--){
       maxright[i]=max(maxright[i+1],A[i]);
   }
   int ans=0;
   for(int i=0;i<n;i++){
       ans+=min(maxleft[i],maxright[i])-A[i];
   }
   return ans;
}
