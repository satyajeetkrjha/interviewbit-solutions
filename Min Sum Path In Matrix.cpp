int Solution::minPathSum(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();// rows
			int m=a[0].size();// columns 
			int dp[n+1][m+1];
			dp[0][0]=a[0][0];
			//cout<<"a[o][0]=="<<a[0][0]<<endl;
			for(int i=1;i<m;i++){// rows 
				dp[0][i]=dp[0][i-1]+a[0][i];
			}
			for(int i=1;i<n;i++){
				dp[i][0]=dp[i-1][0]+a[i][0];
			}
			for(int i=1;i<n;i++){
				for(int j=1;j<m;j++){
					dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];
			}
		}
		return dp[n-1][m-1];
}
