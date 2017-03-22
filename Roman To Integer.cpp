int Solution::romanToInt(string a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();
			n=n-1;
			map<char ,int> M;
			M['I']=1;
            M['V']=5;
             M['X']=10;
             M['L']=50;
            M['C']=100;
           M['D']=500;
           M['M']=1000;
           int ans=0;
           ans+=M[a[n]];
           for(int i=n-1;i>=0;i--){
           	if(M[a[i]]<M[a[i+1]]){
           		ans-=M[a[i]];
			   }
			   else
			   ans+=M[a[i]];
		   }
			return ans;
}
