int Solution::trailingZeroes(int A) {
    int x=A;
    int sum=0;
    for(int i=5;x/i>=1;i=i*5){
        sum+=x/i;
    }
    return sum;
}
