void Solution::nextPermutation(vector<int> &A) {
  int ind=-1;
  for(int i=0;i<A.size()-1;i++){
      if(A[i]<A[i+1]){
          ind=i;// farthest i such taht A[i]<A[i+1]
      }
  }
  if(ind==-1){
      // no such index found
      sort(A.begin(),A.end());
      return ;// look it is void bro
  }
  int st=-1;
  for(int i=ind+1;i<A.size();i++){
      if(A[i]>A[ind]){
         st=i; 
      }
  }
  int temp=A[ind];
  A[ind]=A[st];
  A[st]=temp;
  reverse(A.begin()+ind+1,A.end());
  
}