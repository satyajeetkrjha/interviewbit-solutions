int Solution::removeDuplicates(vector<int> &v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=v.size();// size of vector 
			int len=n;// we will decrease  this
			int i=0;
			int j=1;
			while(j<n){
				while(v[i]==v[j] && j<n){
					j++;// only move j 
					len--;// decrese length
				}
				v[i+1]=v[j];
				i++;j++;
			} 
			return len; 
			
}
