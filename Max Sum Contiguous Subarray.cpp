int Solution::maxSubArray(const vector<int> &A) {
    // kadane algorithm 
    int cur=0;
    int maxsofar=-INT_MAX;
    for(int i=0;i<A.size();i++){
        cur=cur+A[i];
        if(cur>maxsofar)
        maxsofar=cur;
        // now if cur is negative make it positve
        if(cur<0) cur=0;
    }
    return maxsofar;
}
