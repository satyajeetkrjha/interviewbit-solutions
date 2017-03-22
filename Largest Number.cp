bool compit(string s, string t){
      string val1=s.append(t);
      string val2=t.append(s);
      if(val1.compare(val2)>0) return true;
      return false;
  }
string Solution::largestNumber(const vector<int> &A) {
     vector <string > v;
  int n=A.size();

  for(int i=0;i<n;i++) {
  v.push_back(to_string(A[i]));
  }
  sort(v.begin(),v.begin()+n,compit);
  string res="";
  for(int i=0;i<v.size();i++)
  res+=v[i];
  //cout<<"res is "<<res<<endl;
  if(res[0]=='0')
  res='0';
  return res;
}
