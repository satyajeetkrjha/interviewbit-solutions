int Solution::lengthOfLastWord(const string &a) {
    int n=a.size();
    int res=0;
    if(n==0) 
    return res;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=' '){
            res++;
        }
        else{
            if(res>0)
            return res;
        }
    }
}
