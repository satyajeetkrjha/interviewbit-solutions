bool Solution::isPalindrome(int A) {
    int sum=0;
    int x=A;
    while(x>0){
        sum=sum*10+x%10;
        x=x/10;
    }
    if(sum==A) return true;
    return false;
}
