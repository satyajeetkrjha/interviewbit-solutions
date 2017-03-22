int Solution::bulbs(vector<int> &v) {
    int n=v.size();
    if(n==0)
    return 0;
    int ans=0;
    if(v[0]!=1)
    ans++;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1])
        ans++;
    }
    return ans;
}
