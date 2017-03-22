int Solution::diffPossible(vector<int> &v, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    	int i=0;int j=1;
			int n=v.size();
			while(i< n && j<n){
				int diff=v[j]-v[i];
				if( diff==k && i!=j)
				return 1;
				if(diff>k){
					i++;
				}
				else
				j++;
				
			}
			return 0;
}
