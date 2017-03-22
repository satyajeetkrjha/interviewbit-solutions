int Solution::isPalindrome(string a) {
  int n=a.size();
  int i=0;int j=n-1;
  while(i<j){
      
      while(isalnum(a[i])==false &&  i<j){
          i++;
      }
       while(isalnum(a[j])==false &&  i<j){
          j--;
      }
      if(tolower(a[i]) != tolower(a[j])){
      return 0;
      }
      i++;
      j--;
  }
  return 1;
 
}
