string Solution::convertToTitle(int A) {
    	int n=A;
			string res="";
			while(n>0){
				int r=n%26;// remainder
				if(r==0){
					res+='Z';
					n=n/26-1;
				}
				else{
					res+=((r-1)+'A');
					n=n/26;
					
				}
			}
			reverse(res.begin(),res.end());
			return res;
		}

