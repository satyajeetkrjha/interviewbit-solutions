vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    	int n=A.size();
			vector <vector <int> > v;
				vector <int> val;
		if(n==0) return v;
		int sum=2*(n-1);
	
	
		for(int d=0;d<=sum;d++){// value
			for(int i=0;i<=d;i++){
			int j=d-i;
			if(i>=n || j>=n);
				else
				val.push_back(A[i][j]);
			}
			v.push_back(val);
			val.clear();
		}
		return v;
		
}
