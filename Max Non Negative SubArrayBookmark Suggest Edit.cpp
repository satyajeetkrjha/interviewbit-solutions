vector<int> Solution::maxset(vector<int> &A) {
    long long int cur=0;
    vector <int> v;
    long long int  maxsofar=-100;
  int n=A.size();
  int l=0;int r=0;
  int ansl=-1;int ansr=-1;// stores the left and right range where maximum subarray sum occurs 
   while(r<n){
     if(A[r]>=0){
         cur+=(long long int )A[r];
         if(cur>maxsofar){
             maxsofar=cur;
             ansl=l;
             ansr=r+1;
            // cout<<"ansl is "<<ansl<<endl;
             //out<<"ansr is "<<ansr<<endl;
         }
         else if (cur==maxsofar){
             if(ansr-ansl<r-l+1){
                 ansr=r+1;
                 ansl=l;
             }
         }
     }
     else{
         l=r+1;
         cur=0;
     }
     r++;
 }
 if(ansl==-1 || ansr==-1) return v;
 for(int i=ansl;i<ansr;i++)
 v.push_back(A[i]);
 return v;
}