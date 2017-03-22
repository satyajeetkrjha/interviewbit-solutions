int Solution::climbStairs(int A) {
    int dp[A+1];
    if(A<3)
    return A;
  dp[1]=1;dp[2]=2;
	for(int i=3;i<=A;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
int ans=dp[A];
return ans;
}
