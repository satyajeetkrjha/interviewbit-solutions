int Solution::colorful(int a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


char st[100];
		sprintf(st,"%d",a);
		int len=strlen(st);
		map<long long int ,bool> mymap;
		for(int i=0;i<len;i++){
				long long int mul=1ll;;
			for(int j=i;j<len;j++){
				mul=mul*(st[j]-'0');
				if(mymap.find(mul)!=mymap.end()){
					return 0;
				}
				else
					mymap[mul]=true;
			}

		}
		return 1;
	}
