int fun(vector <string> v){
	  int n=v.size();
	  int cur=v[0].size();
	  for(int i=1;i<n;i++){
	  if(v[i].size()>cur){
	  cur=v[i].size();
	  }
	  }
	  return cur;
	  }
string Solution::longestCommonPrefix(vector<string> &v) {
    
    int minlen=fun(v);
	 int n=v.size();
	 string result;
	 char cur;
	 for(int i=0;i<minlen;i++){
	 	cur=v[0][i];// current charcter is chosen from the first string in vector 
	 	for(int j=1;j<n;j++){
               if(v[j][i]!=cur){
               	return result;
               }
	 	}
	 	result.push_back(cur);
	 }
	 return result;
}
