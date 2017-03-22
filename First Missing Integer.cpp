int Solution::firstMissingPositive(vector<int> &A) {
    	int j=0;
			int n=A.size();
			// bring all positive numbers to right first in our given vector 
			for(int i=0;i<n;i++){
				if(A[i]>0){
					swap(A[i],A[j]);
					j++;
				}
			}
			for(int i=0;i<j;i++){
				if(abs(A[i])<j && A[abs(A[i])]>0){
					A[abs(A[i])]=-	A[abs(A[i])];
				}
			}
			for(int i=1;i<j;i++){
				if(A[i]>0)
				return i;
			}
			return j+1;
		}

