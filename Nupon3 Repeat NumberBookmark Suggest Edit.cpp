struct element {
  	int c;// holds count 
	int e;// holds element 
};
vector <int>  fun(vector <int> a,int k){
	struct element temp[k-1];
	int n=a.size();
	vector <int> ans;
	// step 1
	for(int i=0;i<k;i++){// count of all elements initialized to zero 
		temp[i].c=0;
	}
	// step2
	int i,j;
	for( i=0;i<n;i++)
	{
		int x=a[i];// if x  was already there we incremented its count
		for( j=0;j<k-1;j++){
			if(temp[j].e==x){
				temp[j].c++;
				break;//  u move out of j looop as soon as u find such index else we gonna go till k-1 
			}
		}
		if(j==k-1){// so x is not in the temp .but first we check if there is a vailable position for this x 
			int l;
			for(l=0;l<k-1;l++){
				if(temp[l].c==0){
					temp[l].c=1;
					temp[l].e=x;
					break;
				}
			}
			// now if there was no avialaible position we decrement 
			if(l==k-1){
				for(l=0;l<k-1;l++){
					temp[l].c-=1;
				}
				
			}
		}
	}
	for(int i=0;i<k-1;i++){
		int x=temp[i].e;
		int val=0;
		for(int j=0;j<n;j++){
			if(x==a[j]){
				val++;
			}
		}
		if(val>n/k){
			ans.push_back(x);
		}
	}
	return ans;
}
int Solution::repeatedNumber(const vector<int> &A) {
   	int k=3;
vector <int> ans=fun(A,k);

if(ans.size()==0)
return -1;
else
return ans[0];
}
