int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
		int left[n+1];// stores the smallest element in array A till index i , note it is element that we are storing
		int right[n+1];// stores the largest element in array A at the right side of index i , including indexi
		left[0]=A[0];
		for(int i=1;i<n;i++)
		left[i]=min(left[i-1],A[i]);
		right[n-1]=A[n-1];
		for(int i=n-2;i>=0;i--){
			right[i]=max(right[i+1],A[i]);
		}
		int i=0;int j=0;int diff=-1;// maximum diff
		while(i<n && j<n){
			if(left[i]<=right[j]){
				diff=max(diff,j-i);
				j++;// move further in your right array to get bigger elements
			}
			else
			i++;// note left[i]<=left[i+1] as it stores smalllest till index i so move farther to dind even more smaller element 
		}
		return diff;
		}

