int Solution::fibsum(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <int> fibo;
 		fibo.push_back(1);fibo.push_back(1);
 		// now u have 1 and 1 at v[0] and v[1]
 		for(int i=2;fibo[i-1]<n;i++){
 			int val=fibo[i-1]+fibo[i-2];
 			fibo.push_back(val);
		 }
		 int ans=0;
		 int sz=fibo.size();
		 sz--;
		 while(n>0){
		 	// find the largest fibonaci number less tahn n
		 	while(fibo[sz]>n){
		 		sz--;
			 }
			 // now decraese the largest fibonaici number from n
			 n=n-fibo[sz];
			 ans++;
		 }
		 return ans;
}
