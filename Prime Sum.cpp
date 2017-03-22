vector<int> Solution::primesum(int A) {
    vector <int> v;
   vector < bool > isprime(A+1,true);
    isprime[0]=false;isprime[1]=false;
    for( int  i=2;i*i<=A;i++){
        if(isprime[i]==true){
            for(int  j=2*i;j<=A;j+=i) 
            isprime[j]=false;
        }
    }
    for( int  i=2;i<=A;i++){
        if(isprime[i]==true && isprime[A-i]==true ){
        v.push_back(i),v.push_back(A-i);
        break;
    }
    
}
return v;
}