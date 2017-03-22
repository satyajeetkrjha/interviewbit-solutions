int Solution::lis(const vector<int> &v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=v.size();
			int ans=1;
			int arr[n+1];
			for(int i=0;i<n;i++){
				arr[i]=1;
			}
			for(int i=1;i<n;i++){
				for(int j=0;j<i;j++){
				if(v[i]>v[j]){
					arr[i]=max(arr[j]+1,arr[i]);
					ans=max(ans,arr[i]);
				}
			}
		}
			return ans;
}
