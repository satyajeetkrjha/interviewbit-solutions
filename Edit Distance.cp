int minvalue( int a,int b,int c){
			int ans= min(min(a,b),c);
			return ans;
		}
		int edit(string a, string b,int n,int m){
			int dp[n+1][m+1];
			for(int i=0;i<=n;i++){
				for(int j=0;j<=m;j++){
					if(i==0)// think this way u have first string as empty and u a re trying to construct another string of j characters .obviously u will have to insert j charcartes
					dp[i][j]=j;
					else if(j==0)
					dp[i][j]=i;
					else if(a[i-1]==b[j-1])
					dp[i][j]=dp[i-1][j-1];// diagonal wala value;
					else
					dp[i][j]=minvalue(dp[i-1][j],dp[i-1][j-1],dp[i][j-1])+1;

				}		
			
			}
			return dp[n][m];
		}
int Solution::minDistance(string a, string b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    	int ans=edit(a,b,a.size(),b.size());
			return ans;
}
