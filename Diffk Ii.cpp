int Solution::diffPossible(const vector<int> &a, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
 unordered_map <int,int> m;
    for(int i=0;i<a.size();i++){
        m [a[i]]++;
    }
    for(int i=0;i<a.size();i++){
        if(m.count(a[i]+b)!=0){
            if(b!=0)
            return 1;
            else if (m[a[i]]==2)//[ 1, 5, 4, 1, 2 ] this case handled
            return 1;
        }
    }
    return 0;
}
