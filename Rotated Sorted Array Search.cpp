int Solution::search(const vector<int> &v, int key) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0;
	int high=v.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(v[mid]==key)
			return mid;
		if(v[low]<=v[mid]){
			if(key>=v[low] && key <v[mid]){
				high=mid-1;
			}
				else
					low=mid+1;
			}
		

		else{
			if(key>v[mid] && key <=v[high]){
				low=mid+1;
			}
			else
				high=mid-1;
		}

	}
	return -1;
}

