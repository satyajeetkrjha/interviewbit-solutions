
int Solution::pow(int x, int n, int d) {
   long long int  res=1;
   long long int y;
   y=x;
   if(y==0)
   return 0;//corner case

   if(n==0)
   return 1;// any number raised to power is 1
   while(n>0){
       // there are two cases if n is odd or n is even 
       // Can we write x^8 as (x^2)raised 4 i.e (x^2)^(n/2)?But we cn do this only if n is even.
       // what if n is odd?Can we write x^7 as x*x^7 i.e x*x^(n-1)
       //this is what we do iteratively
       if(n%2!=0){
           res=(res*y)%d;
           n=n-1;
       }
       else{
           y=(y*y)%d;
           n=n/2;

       }
       
       
   }
if(res<0)// this is simple modular arithmetic
res=(res+d)%d;
return (int)res;
}


