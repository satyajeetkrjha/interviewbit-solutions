int Solution::titleToNumber(string A) {
     int sum=0;
    int n=A.size()-1;// zyx 2 1 0
    for(int i=0;i<=n;i++){
    	sum+=pow(26,n-i)*(A[i]-'A'+1);
	}
	return sum;
}
