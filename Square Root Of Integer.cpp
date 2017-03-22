int Solution::sqrt(int x) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int  l=0;
		 	long long int  h=x/2+1;
		 	long long int  ans=0;
		 	if(x==0 || x==1)
		 	return x;
		 	while(l<=h){
		 		long long int  mid=(l+h)/2;
		 		if(mid*mid==x){
		 			return (int)mid;
				 }
				 if(mid*mid<x){
				 	l=mid+1;
				 	ans=mid;
				 }
				 else{
				 	h=mid-1;
				 }
			 }
			 return (int)ans;
		 }

