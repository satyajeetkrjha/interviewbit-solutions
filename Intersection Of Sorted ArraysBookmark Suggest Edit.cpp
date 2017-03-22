vector<int> Solution::intersect(const vector<int> &a, const vector<int> &b) {
    int i=0;int j=0;
    vector <int> v;
    int n=a.size();
    int m=b.size();
    while(i< a.size() && j<m){
        if(a[i]<b[j])
          i++;
          else if(a[i]> b[j]){
              j++;
          }
          else{
              v.push_back(a[i]);
              i++;j++;
          }
    }
    return v;
    
}
