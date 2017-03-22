int Solution::isInterleave(string a, string b, string c) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    	int n=a.length();int m =b.length();int k=c.length();
			if(n+m!=k)
			return false;
			bool dp[n+1][m+1];
			
			for(int i=0;i<=n;i++)
			for(int j=0;j<=m;j++)
			dp[i][j]=false;
			
			for(int i=0;i<=n;i++){
				for(int j=0;j<=m;j++){
					if(i==0 && j==0)
					dp[i][j]=true;
					
					else if(i==0 && b[j-1]==c[i+j-1])
						dp[i][j]=dp[i][j-1];
						
					else if(j==0 && a[i-1]==c[i+j-1])
					dp[i][j]=dp[i-1][j];
					
					else if (a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1])
					dp[i][j]=dp[i-1][j];
					
					else if(a[i-1]!=c[i+j-1]&& b[j-1]==c[i+j-1])
					dp[i][j]=dp[i][j-1];
					
					else if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1])
					dp[i][j]=(dp[i][j-1] || dp[i-1][j]);
					
	
				}
			}
		return 	dp[n][m];
    
}
