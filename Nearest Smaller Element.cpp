vector<int> Solution::prevSmaller(vector<int> &A) {
    vector <int> ans;
    stack <int> s;
    int n=A.size();
    vector <int> a=A;
	for(int i=0;i<n;i++){
		int x=a[i];
		while(!s.empty() && s.top()>=x){
			s.pop();
		}
		if(s.empty()==true){
			ans.push_back(-1);
		}
		else
		ans.push_back(s.top());
		s.push(x);
	}
	return ans;
}


