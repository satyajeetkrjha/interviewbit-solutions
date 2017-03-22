int Solution::reverse(int A) {
    int val=0;
long long  temp=0;
    bool flag=false;
    if(A<0) flag=true;
    A=abs(A);
  while(A>0){
      temp=temp*10+A%10;
      A=A/10;
  }
  if(temp>INT_MAX || temp<INT_MIN)
  {//cout<<"true"<<endl;
      return 0;
  }
  if(flag==true) return -(int)temp;
  else 
  return (int)temp;
}
