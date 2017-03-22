int Solution::uniquePathsWithObstacles(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // S
			int n=a.size();
			int m=a[0].size();
			int dp[n+1][m+1];
		
			for(int i=0;i<n;i++){
			    for(int j=0;j<m;j++){
			        dp[i][j]=0;
			        if(a[i][j]==1)
			        continue;
			         if (i == 0 && j == 0)
			         dp[i][j] = 1;
			        if(i>0)
			        dp[i][j]+=dp[i-1][j];
			        if(j>0)
			        dp[i][j]+=dp[i][j-1];
			    }
			}
		return dp[n-1][m-1];
}
