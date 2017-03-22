int Solution::maxProfit(const vector<int> &a) {
    int n=a.size();
    if(n==0 )
    return 0;
			int profit1[n+1];
			int profit2[n+1];
			profit1[0]=0;
			int mini=a[0];
			for(int i=1;i<n;i++){
				mini=min(mini,a[i]);
				profit1[i]=max(profit1[i-1],a[i]-mini);
			}
			int maxii=a[n-1];
			 profit2[n-1]=0;
			for(int i=n-2;i>=0;i--){
				maxii=max(maxii,a[i]);
				profit2[i]=max(profit2[i+1],maxii-a[i]);
				
			}
			int ans=0;
			for(int i=0;i<n;i++){
				ans=max(ans,profit1[i]+profit2[i]);
			}
			return ans;
}
