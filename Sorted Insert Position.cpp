int Solution::searchInsert(vector<int> &v, int x) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    	vector <int>:: iterator low;
		 low=lower_bound(v.begin(),v.end(),x);
	//	cout<<low-v.begin()<<endl;
	return low-v.begin();
}
