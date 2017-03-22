int gcdc(int x,int y){
    if(x==0) return y;
    return gcdc(y%x,x);
}
int Solution::gcd(int A, int B) {
   return gcdc(A,B);
}
